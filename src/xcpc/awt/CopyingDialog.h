/*
 * CopyingDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_CopyingDialog_h__
#define __XCPC_AWT_CopyingDialog_h__

#include <xcpc/awt/HelpDialog.h>
#include <xcpc/awt/CopyingDialogImpl.h>
#include <xcpc/awt/CopyingDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::CopyingDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * CopyingDialog class
 */
class CopyingDialog
    : public HelpDialog
    , public CopyingDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    CopyingDialog()
        : HelpDialog()
        , CopyingDialogListener()
        , _awtCopyingDialogImpl()
    {
        createCopyingDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~CopyingDialog()
    {
        deleteCopyingDialogImpl();
    }

    /**
     * CopyingDialog event
     */
    virtual void onCopyingDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the CopyingDialog implementation
     */
    void createCopyingDialogImpl();

    /**
     * delete the CopyingDialog implementation
     */
    void deleteCopyingDialogImpl();

protected: // protected data
    CopyingDialogImpl* _awtCopyingDialogImpl; /**< CopyingDialog implementation */

private: // disable copy and assignment
    CopyingDialog(const CopyingDialog&);            /**< copy constructor disabled     */
    CopyingDialog& operator=(const CopyingDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_CopyingDialog_h__ */
