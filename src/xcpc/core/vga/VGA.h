/*
 * VGA.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_CORE_VGA_VGA_h__
#define __XCPC_CORE_VGA_VGA_h__

#include <xcpc/base/Resettable.h>

// ---------------------------------------------------------------------------
// xcpc::core::VGA
// ---------------------------------------------------------------------------

namespace xcpc {

namespace core {

/**
 * Video Gate Array class
 */
class VGA : public base::Resettable {
public: // public interface

    /**
     * default constructor
     */
    VGA()
    {
        initialize();
    }

    /**
     * virtual destructor
     */
    virtual ~VGA()
    {
        finalize();
    }

public: // resettable interface

    /**
     * reset the VGA instance
     */
    virtual void reset();

private: // private interface

    /**
     * initialize the VGA instance
     */
    void initialize();

    /**
     * finalize the VGA instance
     */
    void finalize();

private: // disable copy and assignement
    VGA(const VGA&);            /**< copy constructor disabled     */
    VGA& operator=(const VGA&); /**< assignement operator disabled */
};

} /* core */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_CORE_VGA_VGA_h__ */
