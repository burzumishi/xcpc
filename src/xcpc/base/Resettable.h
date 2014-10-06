/*
 * Resettable.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_BASE_Resettable_h__
#define __XCPC_BASE_Resettable_h__

// ---------------------------------------------------------------------------
// xcpc::base::Resettable
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

/**
 * interface for objects that can be reset to an initial state
 */
class Resettable {
public: // public interface

    /**
     * the reset method
     */
    virtual void reset() = 0;

protected: // protected interface

    /**
     * default constructor
     */
    Resettable()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~Resettable()
    {
    }
};

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_BASE_Resettable_h__ */
