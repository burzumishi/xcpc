/*
 * TerminateHandler.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
#include "TerminateHandler.h"

// ---------------------------------------------------------------------------
// xcpc::base::TerminateHandler
// ---------------------------------------------------------------------------

namespace xcpc {

namespace base {

#ifndef DOXYGEN_SHOULD_SKIP_THIS
std::terminate_handler TerminateHandler::_oldHandler = NULL;
std::terminate_handler TerminateHandler::_newHandler = &TerminateHandler::terminate;
#endif

void TerminateHandler::install()
{
    if((_oldHandler == NULL) && (_newHandler != NULL)) {
        _oldHandler = std::set_terminate(_newHandler);
        _newHandler = NULL;
    }
    else {
        std::cerr << "*** unable to install the new terminate handler ***" << std::endl;
        std::terminate();
    }
}

void TerminateHandler::restore()
{
    if((_oldHandler != NULL) && (_newHandler == NULL)) {
        _newHandler = std::set_terminate(_oldHandler);
        _oldHandler = NULL;
    }
    else {
        std::cerr << "*** unable to restore the old terminate handler ***" << std::endl;
        std::terminate();
    }
}

void TerminateHandler::terminate()
{
    std::cerr << "*** terminate called ***" << std::endl;
}

} /* base */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------
