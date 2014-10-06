/*
 * Application.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_BASE_Application_h__
#define __XCPC_BASE_Application_h__

#include <string>
#include <vector>

// ---------------------------------------------------------------------------
// xcpc::base::Application
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

/**
 * base class designed to modelize an application
 */
class Application {
public: // public interface

    /**
     * default constructor
     *
     * @param argc specifies the argument count
     * @param argv specifies the argument list
     */
    Application(int argc, char* argv[])
        : _args(argv, argv + argc)
    {
    }

    /**
     * virtual destructor
     */
    virtual ~Application()
    {
    }

    /**
     * the application run method
     *
     * this method should call successively init() and main()
     *
     * @return true on success, false on failure
     */
    virtual bool run();

protected: // protected interface

    /**
     * the application initialize method
     *
     * @return true on success, false on failure
     */
    virtual bool init() = 0;

    /**
     * the application main method
     *
     * @return true on success, false on failure
     */
    virtual bool main() = 0;

protected: // protected data
    const std::vector<std::string> _args; /**< command-line arguments */

private: // disable copy and assignment
    Application(const Application&);            /**< copy constructor disabled     */
    Application& operator=(const Application&); /**< assignement operator disabled */
};

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_BASE_Application_h__ */
