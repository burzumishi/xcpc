/*
 * RAM.h - Copyright (c) 2001-2014 - Olivier Poncet
 *
 * This file is part of XCPC
 *
 * This progRAM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This progRAM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this progRAM.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __XCPC_CORE_RAM_RAM_h__
#define __XCPC_CORE_RAM_RAM_h__

#include <xcpc/base/Resettable.h>

// ---------------------------------------------------------------------------
// xcpc::core::RAM
// ---------------------------------------------------------------------------

namespace xcpc {

namespace core {

/**
 * Random Access Memory class
 */
class RAM : public base::Resettable {
public: // public interface

    /**
     * default constructor
     */
    RAM()
    {
        initialize();
    }

    /**
     * virtual destructor
     */
    virtual ~RAM()
    {
        finalize();
    }

public: // resettable interface

    /**
     * reset the RAM instance
     */
    virtual void reset();

private: // private interface

    /**
     * initialize the RAM instance
     */
    void initialize();

    /**
     * finalize the RAM instance
     */
    void finalize();

private: // disable copy and assignement
    RAM(const RAM&);            /**< copy constructor disabled     */
    RAM& operator=(const RAM&); /**< assignement operator disabled */
};

} /* core */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_CORE_RAM_RAM_h__ */
