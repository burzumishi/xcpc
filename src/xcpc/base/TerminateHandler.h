/*
 * TerminateHandler.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_BASE_TerminateHandler_h__
#define __XCPC_BASE_TerminateHandler_h__

#include <exception>

// ---------------------------------------------------------------------------
// xcpc::base::TerminateHandler
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

/**
 * utility class designed to manage the std::terminate handler
 */
class TerminateHandler {
public: // public interface

    /**
     * default constructor
     */
    TerminateHandler()
    {
        install();
    }

    /**
     * virtual destructor
     */
    virtual ~TerminateHandler()
    {
        restore();
    }

private: // private interface

    /**
     * install the new terminate handler
     */
    static void install();

    /**
     * restore the old terminate handler
     */
    static void restore();

    /**
     * output a message and terminate the program
     */
    static void terminate();

private: // private data
    static std::terminate_handler _oldHandler; /**< old terminate handler */
    static std::terminate_handler _newHandler; /**< new terminate handler */

private: // disable copy and assignement
    TerminateHandler(const TerminateHandler&);            /**< copy constructor disabled     */
    TerminateHandler& operator=(const TerminateHandler&); /**< assignement operator disabled */
};

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_BASE_TerminateHandler_h__ */
