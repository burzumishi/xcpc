/*
 * PrivateImpl.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_UI_PrivateImpl_h__
#define __XCPC_UI_PrivateImpl_h__

#include <xcpc/ui/All.h>

// ---------------------------------------------------------------------------
// xcpc::ui::PrivateImpl
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

/**
 * PrivateImpl abstract base class
 */
class PrivateImpl {
public: // public interface

    /**
     * default constructor
     */
    PrivateImpl()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~PrivateImpl()
    {
    }

public: // abstract interface

    /**
     * create the user interface
     */
    virtual void create() = 0;

    /**
     * destroy the user interface
     */
    virtual void destroy() = 0;

    /**
     * run the user interface
     */
    virtual void run() = 0;

private: // disable copy and assignment
    PrivateImpl(const PrivateImpl&);            /**< copy constructor disabled     */
    PrivateImpl& operator=(const PrivateImpl&); /**< assignement operator disabled */
};

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_UI_PrivateImpl_h__ */
