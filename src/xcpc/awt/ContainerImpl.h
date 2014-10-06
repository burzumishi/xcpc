/*
 * ContainerImpl.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_ContainerImpl_h__
#define __XCPC_AWT_ContainerImpl_h__

#include <xcpc/awt/All.h>

// ---------------------------------------------------------------------------
// xcpc::awt::ContainerImpl
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * ContainerImpl class
 */
class ContainerImpl {
public: // public interface

    /**
     * default constructor
     */
    ContainerImpl(Container& awtContainer)
        : _awtContainer(awtContainer)
    {
    }

    /**
     * virtual destructor
     */
    virtual ~ContainerImpl()
    {
    }

protected: // protected data
    Container& _awtContainer; /**< Container reference */

private: // disable copy and assignment
    ContainerImpl(const ContainerImpl&);            /**< copy constructor disabled     */
    ContainerImpl& operator=(const ContainerImpl&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_ContainerImpl_h__ */
