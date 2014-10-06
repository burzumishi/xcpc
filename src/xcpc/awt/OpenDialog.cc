/*
 * OpenDialog.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
#include "OpenDialog.h"

// ---------------------------------------------------------------------------
// xcpc::awt::OpenDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

void OpenDialog::createOpenDialogImpl()
{
    if(_awtOpenDialogImpl == NULL) {
        _awtOpenDialogImpl = _awtImplFactory->createOpenDialogImpl(*this);
    }
}

void OpenDialog::deleteOpenDialogImpl()
{
    if(_awtOpenDialogImpl != NULL) {
        _awtOpenDialogImpl = _awtImplFactory->deleteOpenDialogImpl(_awtOpenDialogImpl);
    }
}

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------
