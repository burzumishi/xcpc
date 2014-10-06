/*
 * EmulatorApp.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_EmulatorApp_h__
#define __XCPC_EmulatorApp_h__

#include <xcpc/base/Application.h>

// ---------------------------------------------------------------------------
// xcpc::EmulatorApp
// ---------------------------------------------------------------------------

namespace xcpc {

/**
 * emulator application
 */
class EmulatorApp : public base::Application {
public: // public interface

    /**
     * default constructor
     */
    EmulatorApp(int argc, char* argv[])
        : base::Application(argc, argv)
    {
    }

    /**
     * virtual destructor
     */
    virtual ~EmulatorApp()
    {
    }

protected: // protected interface

    /**
     * the emulator initialize implementation
     *
     * @return true on success, false on failure
     */
    virtual bool init();

    /**
     * the emulator main implementation
     *
     * @return true on success, false on failure
     */
    virtual bool main();

private: // disable copy and assignment
    EmulatorApp(const EmulatorApp&);            /**< copy constructor disabled     */
    EmulatorApp& operator=(const EmulatorApp&); /**< assignement operator disabled */
};

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_EmulatorApp_h__ */
