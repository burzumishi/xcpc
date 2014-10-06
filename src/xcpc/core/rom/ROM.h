/*
 * ROM.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_CORE_ROM_ROM_h__
#define __XCPC_CORE_ROM_ROM_h__

#include <xcpc/base/Resettable.h>

// ---------------------------------------------------------------------------
// xcpc::core::ROM
// ---------------------------------------------------------------------------

namespace xcpc {

namespace core {

/**
 * Read Only Memory class
 */
class ROM : public base::Resettable {
public: // public interface

    /**
     * default constructor
     */
    ROM()
    {
        initialize();
    }

    /**
     * virtual destructor
     */
    virtual ~ROM()
    {
        finalize();
    }

public: // resettable interface

    /**
     * reset the ROM instance
     */
    virtual void reset();

private: // private interface

    /**
     * initialize the ROM instance
     */
    void initialize();

    /**
     * finalize the ROM instance
     */
    void finalize();

private: // disable copy and assignement
    ROM(const ROM&);            /**< copy constructor disabled     */
    ROM& operator=(const ROM&); /**< assignement operator disabled */
};

} /* core */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_CORE_ROM_ROM_h__ */
