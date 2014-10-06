/*
 * Container.cc - Copyright (c) 2001-2014 - Olivier Poncet
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
#include "Container.h"

// ---------------------------------------------------------------------------
// xcpc::awt::Container
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

void Container::createContainerImpl()
{
    if(_awtContainerImpl == NULL) {
        _awtContainerImpl = _awtImplFactory->createContainerImpl(*this);
    }
}

void Container::deleteContainerImpl()
{
    if(_awtContainerImpl != NULL) {
        _awtContainerImpl = _awtImplFactory->deleteContainerImpl(_awtContainerImpl);
    }
}

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------
