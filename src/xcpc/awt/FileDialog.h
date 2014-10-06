/*
 * FileDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_FileDialog_h__
#define __XCPC_AWT_FileDialog_h__

#include <xcpc/awt/Dialog.h>
#include <xcpc/awt/FileDialogImpl.h>
#include <xcpc/awt/FileDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::FileDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * FileDialog class
 */
class FileDialog
    : public Dialog
    , public FileDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    FileDialog()
        : Dialog()
        , FileDialogListener()
        , _awtFileDialogImpl()
    {
        createFileDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~FileDialog()
    {
        deleteFileDialogImpl();
    }

    /**
     * FileDialog event
     */
    virtual void onFileDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the FileDialog implementation
     */
    void createFileDialogImpl();

    /**
     * delete the FileDialog implementation
     */
    void deleteFileDialogImpl();

protected: // protected data
    FileDialogImpl* _awtFileDialogImpl; /**< FileDialog implementation */

private: // disable copy and assignment
    FileDialog(const FileDialog&);            /**< copy constructor disabled     */
    FileDialog& operator=(const FileDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_FileDialog_h__ */
