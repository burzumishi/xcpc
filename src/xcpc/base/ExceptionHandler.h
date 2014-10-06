/*
 * ExceptionHandler.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_BASE_ExceptionHandler_h__
#define __XCPC_BASE_ExceptionHandler_h__

#include <stdexcept>

// ---------------------------------------------------------------------------
// xcpc::base::ExceptionHandler
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

/**
 * utility class designed to process some well known exceptions
 */
class ExceptionHandler {
public: // public interface

    /**
     * default constructor
     */
    ExceptionHandler()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~ExceptionHandler()
    {
    }

    /**
     * process an unhandled exception
     */
    virtual void process() const;

    /**
     * process a std::exception event
     *
     * @param e specifies a reference to the handled exception
     */
    virtual void process(const std::exception&) const;

    /**
     * process a std::bad_alloc event
     *
     * @param e specifies a reference to the handled exception
     */
    virtual void process(const std::bad_alloc&) const;

    /**
     * process a std::logic_error event
     *
     * @param e specifies a reference to the handled exception
     */
    virtual void process(const std::logic_error&) const;

    /**
     * process a std::runtime_error event
     *
     * @param e specifies a reference to the handled exception
     */
    virtual void process(const std::runtime_error&) const;

protected: // protected interface

    /**
     * output a message and terminate the program
     *
     * @param name specifies the name of the handled exception
     * @param what specifies the reason of the handled exception
     */
    static void terminate(const char* name, const char* what);

private: // disable copy and assignement
    ExceptionHandler(const ExceptionHandler&);            /**< copy constructor disabled     */
    ExceptionHandler& operator=(const ExceptionHandler&); /**< assignement operator disabled */
};

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_BASE_ExceptionHandler_h__ */
