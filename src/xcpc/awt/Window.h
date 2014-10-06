/*
 * Window.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_Window_h__
#define __XCPC_AWT_Window_h__

#include <xcpc/awt/Container.h>
#include <xcpc/awt/WindowImpl.h>
#include <xcpc/awt/WindowListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::Window
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * Window class
 */
class Window
    : public Container
    , public WindowListener
{
public: // public interface

    /**
     * default constructor
     */
    Window()
        : Container()
        , WindowListener()
        , _awtWindowImpl()
    {
        createWindowImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~Window()
    {
        deleteWindowImpl();
    }

    /**
     * Window event
     */
    virtual void onWindowEvent()
    {
    }

protected: // protected interface

    /**
     * create the Window implementation
     */
    void createWindowImpl();

    /**
     * delete the Window implementation
     */
    void deleteWindowImpl();

protected: // protected data
    WindowImpl* _awtWindowImpl; /**< Window implementation */

private: // disable copy and assignment
    Window(const Window&);            /**< copy constructor disabled     */
    Window& operator=(const Window&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_Window_h__ */
