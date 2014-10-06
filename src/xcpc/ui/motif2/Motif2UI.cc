/*
 * Motif2UI.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
#include "Motif2UI.h"

// ---------------------------------------------------------------------------
// xcpc::ui::Motif2UI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

void Motif2UI::create()
{
}

void Motif2UI::destroy()
{
}

void Motif2UI::run()
{
}

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// xcpc::ui::createMotif2UI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

PrivateImpl* createMotif2UI()
{
    return new Motif2UI();
}

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------
