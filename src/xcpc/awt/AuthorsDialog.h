/*
 * AuthorsDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_AuthorsDialog_h__
#define __XCPC_AWT_AuthorsDialog_h__

#include <xcpc/awt/HelpDialog.h>
#include <xcpc/awt/AuthorsDialogImpl.h>
#include <xcpc/awt/AuthorsDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::AuthorsDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * AuthorsDialog class
 */
class AuthorsDialog
    : public HelpDialog
    , public AuthorsDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    AuthorsDialog()
        : HelpDialog()
        , AuthorsDialogListener()
        , _awtAuthorsDialogImpl()
    {
        createAuthorsDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~AuthorsDialog()
    {
        deleteAuthorsDialogImpl();
    }

    /**
     * AuthorsDialog event
     */
    virtual void onAuthorsDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the AuthorsDialog implementation
     */
    void createAuthorsDialogImpl();

    /**
     * delete the AuthorsDialog implementation
     */
    void deleteAuthorsDialogImpl();

protected: // protected data
    AuthorsDialogImpl* _awtAuthorsDialogImpl; /**< AuthorsDialog implementation */

private: // disable copy and assignment
    AuthorsDialog(const AuthorsDialog&);            /**< copy constructor disabled     */
    AuthorsDialog& operator=(const AuthorsDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_AuthorsDialog_h__ */
