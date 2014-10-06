/*
 * UI.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
#include "PrivateImpl.h"
#include "PrivateImplFactory.h"
#include "UI.h"

// ---------------------------------------------------------------------------
// xcpc::ui::UI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

void UI::create()
{
    if(_pimpl != NULL) {
        _pimpl->create();
    }
}

void UI::destroy()
{
    if(_pimpl != NULL) {
        _pimpl->destroy();
    }
}

void UI::run()
{
    if(_pimpl != NULL) {
        _pimpl->run();
    }
}

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------
