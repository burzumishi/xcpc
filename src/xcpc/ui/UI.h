/*
 * UI.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_UI_UI_h__
#define __XCPC_UI_UI_h__

#include <xcpc/ui/All.h>

// ---------------------------------------------------------------------------
// xcpc::ui::UI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

/**
 * UI abstract class
 */
class UI {
public: // public interface

    /**
     * default constructor
     */
    UI()
        : _pimpl(NULL)
    {
        create();
    }

    /**
     * virtual destructor
     */
    virtual ~UI()
    {
        destroy();
    }

    /**
     * run the user interface
     */
    void run();

private: // private interface

    /**
     * create the user interface
     */
    void create();

    /**
     * destroy the user interface
     */
    void destroy();

private: // private data
    PrivateImpl* _pimpl; /**< private implementation */

private: // disable copy and assignment
    UI(const UI&);            /**< copy constructor disabled     */
    UI& operator=(const UI&); /**< assignement operator disabled */
};

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_UI_UI_h__ */
