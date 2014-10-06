/*
 * ContainerListener.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_ContainerListener_h__
#define __XCPC_AWT_ContainerListener_h__

#include <xcpc/awt/All.h>

// ---------------------------------------------------------------------------
// xcpc::awt::ContainerEvent
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * ContainerEvent struct
 */
struct ContainerEvent {
    Container& awtContainer;
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// xcpc::awt::ContainerListener
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * ContainerListener class
 */
class ContainerListener {
public: // public interface

    /**
     * Container event
     */
    virtual void onContainerEvent(const ContainerEvent&) = 0;

protected: // protected interface

    /**
     * default constructor
     */
    ContainerListener()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~ContainerListener()
    {
    }
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_ContainerListener_h__ */
