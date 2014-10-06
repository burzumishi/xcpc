/*
 * SharedPtr.h - Copyright (c) 2001-2014 - Olivier Poncet
 *
 * This file is part of XCPC
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __XCPC_BASE_SharedPtr_h__
#define __XCPC_BASE_SharedPtr_h__

#include <algorithm>
#include <stdexcept>

// ---------------------------------------------------------------------------
// xcpc::base::SharedPtrTraits
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

/**
 * generic traits for SharedPtr class
 */
template <typename T>
struct SharedPtrTraits {
    typedef T      value_type;
    typedef size_t count_type;

    struct share_type {
        value_type* pointer;
        count_type* counter;
    };

    static void swap(share_type& lhs, share_type& rhs)
    {
        std::swap(lhs, rhs);
    }

    static const share_type construct(value_type* pointer)
    {
        const share_type share = {
            pointer, new count_type(0)
        };
        return share;
    }

    static count_type acquire(share_type& share)
    {
        count_type& count(*share.counter);
        return ++count;
    }

    static count_type release(share_type& share)
    {
        count_type& count(*share.counter);
        return --count;
    }

    static void clear(share_type& share)
    {
        share.pointer = NULL;
        share.counter = NULL;
    }

    static void destruct(share_type& share)
    {
        delete share.pointer;
        share.pointer = NULL;
        delete share.counter;
        share.counter = NULL;
    }

    static value_type& get_ref(const share_type& share)
    {
        if(share.pointer == NULL) {
            throw std::runtime_error("cannot dereference a null pointer");
        }
        return *share.pointer;
    }

    static value_type* get_ptr(const share_type& share)
    {
        if(share.pointer == NULL) {
            throw std::runtime_error("cannot dereference a null pointer");
        }
        return  share.pointer;
    }
};

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// xcpc::base::SharedPtr
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

/**
 * utility class designed to manage shared pointer
 */
template <typename T>
class SharedPtr {
public: // public traits
    typedef SharedPtrTraits<T> traits;
    typedef typename traits::share_type share_type;
    typedef typename traits::value_type value_type;
    typedef typename traits::count_type count_type;

public: // public interface
    SharedPtr(value_type* pointer)
        : _share(traits::construct(pointer))
    {
        if(traits::acquire(_share) == 0) {
            throw std::overflow_error("reference counter overflow");
        }
    }

    SharedPtr(const SharedPtr& rhs)
        : _share(rhs._share)
    {
        if(traits::acquire(_share) == 0) {
            throw std::overflow_error("reference counter overflow");
        }
    }

   ~SharedPtr()
    {
        if(traits::release(_share) == 0) {
            traits::destruct(_share);
        }
        else {
            traits::clear(_share);
        }
    }

    void swap(SharedPtr& rhs)
    {
        traits::swap(_share, rhs._share);
    }

    value_type& operator*() const
    {
        return traits::get_ref(_share);
    }

    value_type* operator->() const
    {
        return traits::get_ptr(_share);
    }

    SharedPtr& operator=(const SharedPtr& rhs)
    {
        if(&rhs != this) {
            SharedPtr(rhs).swap(*this);
        }
        return *this;
    }

private: // private data
    share_type _share;
};

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_BASE_SharedPtr_h__ */
