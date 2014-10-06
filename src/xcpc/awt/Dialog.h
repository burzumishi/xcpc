/*
 * Dialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_Dialog_h__
#define __XCPC_AWT_Dialog_h__

#include <xcpc/awt/Window.h>
#include <xcpc/awt/DialogImpl.h>
#include <xcpc/awt/DialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::Dialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * Dialog class
 */
class Dialog
    : public Window
    , public DialogListener
{
public: // public interface

    /**
     * default constructor
     */
    Dialog()
        : Window()
        , DialogListener()
        , _awtDialogImpl()
    {
        createDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~Dialog()
    {
        deleteDialogImpl();
    }

    /**
     * Dialog event
     */
    virtual void onDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the Dialog implementation
     */
    void createDialogImpl();

    /**
     * delete the Dialog implementation
     */
    void deleteDialogImpl();

protected: // protected data
    DialogImpl* _awtDialogImpl; /**< Dialog implementation */

private: // disable copy and assignment
    Dialog(const Dialog&);            /**< copy constructor disabled     */
    Dialog& operator=(const Dialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_Dialog_h__ */
