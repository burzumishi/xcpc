/*
 * main.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <xcpc/base/ExceptionHandler.h>
#include <xcpc/base/TerminateHandler.h>
#include "EmulatorApp.h"
#include "main.h"

// ---------------------------------------------------------------------------
// xcpc::main
// ---------------------------------------------------------------------------

namespace xcpc {

/**
 * the program entry point
 *
 * @param argc specifies the argument count
 * @param argv specifies the argument list
 *
 * @return EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char* argv[])
{
    const base::TerminateHandler terminate_handler;
    const base::ExceptionHandler exception_handler;
    try {
        EmulatorApp app(argc, argv);
        if(app.run() == false) {
            return EXIT_FAILURE;
        }
    }
    catch(const std::runtime_error& e) {
        exception_handler.process(e);
    }
    catch(const std::logic_error& e) {
        exception_handler.process(e);
    }
    catch(const std::bad_alloc& e) {
        exception_handler.process(e);
    }
    catch(const std::exception& e) {
        exception_handler.process(e);
    }
    catch(...) {
        exception_handler.process();
    }
    return EXIT_SUCCESS;
}

} /* xcpc */

// ---------------------------------------------------------------------------
// main
// ---------------------------------------------------------------------------

/**
 * the program entry point
 *
 * @param argc specifies the argument count
 * @param argv specifies the argument list
 *
 * @return EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char* argv[])
{
    return xcpc::main(argc, argv);
}

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------
