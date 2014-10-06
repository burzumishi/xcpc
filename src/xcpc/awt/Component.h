/*
 * Component.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_Component_h__
#define __XCPC_AWT_Component_h__

#include <xcpc/awt/Object.h>
#include <xcpc/awt/ComponentImpl.h>
#include <xcpc/awt/ComponentListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::Component
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * Component class
 */
class Component
    : public Object
    , public ComponentListener
{
public: // public interface

    /**
     * default constructor
     */
    Component()
        : Object()
        , ComponentListener()
        , _awtComponentImpl()
    {
        createComponentImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~Component()
    {
        deleteComponentImpl();
    }

    /**
     * Component event
     */
    virtual void onComponentEvent()
    {
    }

protected: // protected interface

    /**
     * create the Component implementation
     */
    void createComponentImpl();

    /**
     * delete the Component implementation
     */
    void deleteComponentImpl();

protected: // protected data
    ComponentImpl* _awtComponentImpl; /**< Component implementation */

private: // disable copy and assignment
    Component(const Component&);            /**< copy constructor disabled     */
    Component& operator=(const Component&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_Component_h__ */
