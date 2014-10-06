/*
 * FDC.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_CORE_FDC_FDC_h__
#define __XCPC_CORE_FDC_FDC_h__

#include <xcpc/base/Resettable.h>

// ---------------------------------------------------------------------------
// xcpc::core::FDC
// ---------------------------------------------------------------------------

namespace xcpc {

namespace core {

/**
 * Floppy-Disc Controller class
 */
class FDC : public base::Resettable {
public: // public interface

    /**
     * default constructor
     */
    FDC()
    {
        initialize();
    }

    /**
     * virtual destructor
     */
    virtual ~FDC()
    {
        finalize();
    }

public: // resettable interface

    /**
     * reset the FDC instance
     */
    virtual void reset();

private: // private interface

    /**
     * initialize the FDC instance
     */
    void initialize();

    /**
     * finalize the FDC instance
     */
    void finalize();

private: // disable copy and assignement
    FDC(const FDC&);            /**< copy constructor disabled     */
    FDC& operator=(const FDC&); /**< assignement operator disabled */
};

} /* core */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_CORE_FDC_FDC_h__ */
