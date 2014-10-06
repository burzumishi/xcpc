/*
 * QuitDialog.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
#include "QuitDialog.h"

// ---------------------------------------------------------------------------
// xcpc::awt::QuitDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

void QuitDialog::createQuitDialogImpl()
{
    if(_awtQuitDialogImpl == NULL) {
        _awtQuitDialogImpl = _awtImplFactory->createQuitDialogImpl(*this);
    }
}

void QuitDialog::deleteQuitDialogImpl()
{
    if(_awtQuitDialogImpl != NULL) {
        _awtQuitDialogImpl = _awtImplFactory->deleteQuitDialogImpl(_awtQuitDialogImpl);
    }
}

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------