/*
 * Container.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_Container_h__
#define __XCPC_AWT_Container_h__

#include <xcpc/awt/Component.h>
#include <xcpc/awt/ContainerImpl.h>
#include <xcpc/awt/ContainerListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::Container
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * Container class
 */
class Container
    : public Component
    , public ContainerListener
{
public: // public interface

    /**
     * default constructor
     */
    Container()
        : Component()
        , ContainerListener()
        , _awtContainerImpl()
    {
        createContainerImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~Container()
    {
        deleteContainerImpl();
    }

    /**
     * Container event
     */
    virtual void onContainerEvent()
    {
    }

protected: // protected interface

    /**
     * create the Container implementation
     */
    void createContainerImpl();

    /**
     * delete the Container implementation
     */
    void deleteContainerImpl();

protected: // protected data
    ContainerImpl* _awtContainerImpl; /**< Container implementation */

private: // disable copy and assignment
    Container(const Container&);            /**< copy constructor disabled     */
    Container& operator=(const Container&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_Container_h__ */
