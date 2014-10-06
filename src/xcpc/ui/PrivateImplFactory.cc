/*
 * PrivateImplFactory.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifdef WITH_ATHENA
#include "athena/AthenaUI.h"
#endif
#ifdef WITH_MOTIF2
#include "motif2/Motif2UI.h"
#endif
#include "PrivateImplFactory.h"

// ---------------------------------------------------------------------------
// xcpc::ui::PrivateImplFactory
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

PrivateImpl* PrivateImplFactory::create(const std::string& name)
{
    if(name == "null") {
        return NULL;
    }
#ifdef WITH_ATHENA
    else if(name == "athena") {
        return createAthenaUI();
    }
#endif
#ifdef WITH_MOTIF2
    else if(name == "motif2") {
        return createMotif2UI();
    }
#endif
    return NULL;
}

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------
