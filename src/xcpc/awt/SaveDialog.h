/*
 * SaveDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_SaveDialog_h__
#define __XCPC_AWT_SaveDialog_h__

#include <xcpc/awt/FileDialog.h>
#include <xcpc/awt/SaveDialogImpl.h>
#include <xcpc/awt/SaveDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::SaveDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * SaveDialog class
 */
class SaveDialog
    : public FileDialog
    , public SaveDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    SaveDialog()
        : FileDialog()
        , SaveDialogListener()
        , _awtSaveDialogImpl()
    {
        createSaveDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~SaveDialog()
    {
        deleteSaveDialogImpl();
    }

    /**
     * SaveDialog event
     */
    virtual void onSaveDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the SaveDialog implementation
     */
    void createSaveDialogImpl();

    /**
     * delete the SaveDialog implementation
     */
    void deleteSaveDialogImpl();

protected: // protected data
    SaveDialogImpl* _awtSaveDialogImpl; /**< SaveDialog implementation */

private: // disable copy and assignment
    SaveDialog(const SaveDialog&);            /**< copy constructor disabled     */
    SaveDialog& operator=(const SaveDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_SaveDialog_h__ */
