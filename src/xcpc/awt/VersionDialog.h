/*
 * VersionDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_VersionDialog_h__
#define __XCPC_AWT_VersionDialog_h__

#include <xcpc/awt/HelpDialog.h>
#include <xcpc/awt/VersionDialogImpl.h>
#include <xcpc/awt/VersionDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::VersionDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * VersionDialog class
 */
class VersionDialog
    : public HelpDialog
    , public VersionDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    VersionDialog()
        : HelpDialog()
        , VersionDialogListener()
        , _awtVersionDialogImpl()
    {
        createVersionDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~VersionDialog()
    {
        deleteVersionDialogImpl();
    }

    /**
     * VersionDialog event
     */
    virtual void onVersionDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the VersionDialog implementation
     */
    void createVersionDialogImpl();

    /**
     * delete the VersionDialog implementation
     */
    void deleteVersionDialogImpl();

protected: // protected data
    VersionDialogImpl* _awtVersionDialogImpl; /**< VersionDialog implementation */

private: // disable copy and assignment
    VersionDialog(const VersionDialog&);            /**< copy constructor disabled     */
    VersionDialog& operator=(const VersionDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_VersionDialog_h__ */
