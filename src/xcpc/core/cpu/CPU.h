/*
 * CPU.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_CORE_CPU_CPU_h__
#define __XCPC_CORE_CPU_CPU_h__

#include <xcpc/base/Resettable.h>

// ---------------------------------------------------------------------------
// xcpc::core::CPU
// ---------------------------------------------------------------------------

namespace xcpc {

namespace core {

/**
 * Central Processing Unit class
 */
class CPU : public base::Resettable {
public: // public interface

    /**
     * default constructor
     */
    CPU()
    {
        initialize();
    }

    /**
     * virtual destructor
     */
    virtual ~CPU()
    {
        finalize();
    }

public: // resettable interface

    /**
     * reset the CPU instance
     */
    virtual void reset();

private: // private interface

    /**
     * initialize the CPU instance
     */
    void initialize();

    /**
     * finalize the CPU instance
     */
    void finalize();

private: // disable copy and assignement
    CPU(const CPU&);            /**< copy constructor disabled     */
    CPU& operator=(const CPU&); /**< assignement operator disabled */
};

} /* core */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_CORE_CPU_CPU_h__ */
