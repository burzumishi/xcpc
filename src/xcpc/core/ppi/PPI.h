/*
 * PPI.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_CORE_PPI_PPI_h__
#define __XCPC_CORE_PPI_PPI_h__

#include <xcpc/base/Resettable.h>

// ---------------------------------------------------------------------------
// xcpc::core::PPI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace core {

/**
 * Programmable Peripheral Interface class
 */
class PPI : public base::Resettable {
public: // public interface

    /**
     * default constructor
     */
    PPI()
    {
        initialize();
    }

    /**
     * virtual destructor
     */
    virtual ~PPI()
    {
        finalize();
    }

public: // resettable interface

    /**
     * reset the PPI instance
     */
    virtual void reset();

private: // private interface

    /**
     * initialize the PPI instance
     */
    void initialize();

    /**
     * finalize the PPI instance
     */
    void finalize();

private: // disable copy and assignement
    PPI(const PPI&);            /**< copy constructor disabled     */
    PPI& operator=(const PPI&); /**< assignement operator disabled */
};

} /* core */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_CORE_PPI_PPI_h__ */
