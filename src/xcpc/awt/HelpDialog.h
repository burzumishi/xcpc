/*
 * HelpDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_HelpDialog_h__
#define __XCPC_AWT_HelpDialog_h__

#include <xcpc/awt/Dialog.h>
#include <xcpc/awt/HelpDialogImpl.h>
#include <xcpc/awt/HelpDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::HelpDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * HelpDialog class
 */
class HelpDialog
    : public Dialog
    , public HelpDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    HelpDialog()
        : Dialog()
        , HelpDialogListener()
        , _awtHelpDialogImpl()
    {
        createHelpDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~HelpDialog()
    {
        deleteHelpDialogImpl();
    }

    /**
     * HelpDialog event
     */
    virtual void onHelpDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the HelpDialog implementation
     */
    void createHelpDialogImpl();

    /**
     * delete the HelpDialog implementation
     */
    void deleteHelpDialogImpl();

protected: // protected data
    HelpDialogImpl* _awtHelpDialogImpl; /**< HelpDialog implementation */

private: // disable copy and assignment
    HelpDialog(const HelpDialog&);            /**< copy constructor disabled     */
    HelpDialog& operator=(const HelpDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_HelpDialog_h__ */
