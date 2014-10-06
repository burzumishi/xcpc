/*
 * ExceptionHandler.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "ExceptionHandler.h"

// ---------------------------------------------------------------------------
// xcpc::base::ExceptionHandler
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

void ExceptionHandler::process() const
{
    terminate("unhandled exception", NULL);
}

void ExceptionHandler::process(const std::exception& e) const
{
    terminate("std::exception", e.what());
}

void ExceptionHandler::process(const std::bad_alloc& e) const
{
    terminate("std::bad_alloc", e.what());
}

void ExceptionHandler::process(const std::logic_error& e) const
{
    terminate("std::logic_error", e.what());
}

void ExceptionHandler::process(const std::runtime_error& e) const
{
    terminate("std::runtime_error", e.what());
}

void ExceptionHandler::terminate(const char* name, const char* what)
{
    if((what != NULL) && (*what != '\0')) {
        std::cerr << name << ' ' << "has been thrown" << ',' << ' ' << what << std::endl;
    }
    else {
        std::cerr << name << ' ' << "has been thrown" << std::endl;
    }
    /* Bang ! You're Dead */ {
        std::terminate();
    }
}

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------
