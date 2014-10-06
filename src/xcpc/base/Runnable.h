/*
 * Runnable.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_BASE_Runnable_h__
#define __XCPC_BASE_Runnable_h__

// ---------------------------------------------------------------------------
// xcpc::base::Runnable
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

/**
 * interface for objects that can run a task
 */
class Runnable {
public: // public interface

    /**
     * the run method
     */
    virtual void run() = 0;

protected: // protected interface

    /**
     * default constructor
     */
    Runnable()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~Runnable()
    {
    }
};

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_BASE_Runnable_h__ */
