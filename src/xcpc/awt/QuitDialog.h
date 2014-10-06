/*
 * QuitDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_QuitDialog_h__
#define __XCPC_AWT_QuitDialog_h__

#include <xcpc/awt/FileDialog.h>
#include <xcpc/awt/QuitDialogImpl.h>
#include <xcpc/awt/QuitDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::QuitDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * QuitDialog class
 */
class QuitDialog
    : public FileDialog
    , public QuitDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    QuitDialog()
        : FileDialog()
        , QuitDialogListener()
        , _awtQuitDialogImpl()
    {
        createQuitDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~QuitDialog()
    {
        deleteQuitDialogImpl();
    }

    /**
     * QuitDialog event
     */
    virtual void onQuitDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the QuitDialog implementation
     */
    void createQuitDialogImpl();

    /**
     * delete the QuitDialog implementation
     */
    void deleteQuitDialogImpl();

protected: // protected data
    QuitDialogImpl* _awtQuitDialogImpl; /**< QuitDialog implementation */

private: // disable copy and assignment
    QuitDialog(const QuitDialog&);            /**< copy constructor disabled     */
    QuitDialog& operator=(const QuitDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_QuitDialog_h__ */
