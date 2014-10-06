/*
 * OpenDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_OpenDialog_h__
#define __XCPC_AWT_OpenDialog_h__

#include <xcpc/awt/FileDialog.h>
#include <xcpc/awt/OpenDialogImpl.h>
#include <xcpc/awt/OpenDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::OpenDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * OpenDialog class
 */
class OpenDialog
    : public FileDialog
    , public OpenDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    OpenDialog()
        : FileDialog()
        , OpenDialogListener()
        , _awtOpenDialogImpl()
    {
        createOpenDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~OpenDialog()
    {
        deleteOpenDialogImpl();
    }

    /**
     * OpenDialog event
     */
    virtual void onOpenDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the OpenDialog implementation
     */
    void createOpenDialogImpl();

    /**
     * delete the OpenDialog implementation
     */
    void deleteOpenDialogImpl();

protected: // protected data
    OpenDialogImpl* _awtOpenDialogImpl; /**< OpenDialog implementation */

private: // disable copy and assignment
    OpenDialog(const OpenDialog&);            /**< copy constructor disabled     */
    OpenDialog& operator=(const OpenDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_OpenDialog_h__ */
