/*
 * AboutDialog.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_AboutDialog_h__
#define __XCPC_AWT_AboutDialog_h__

#include <xcpc/awt/HelpDialog.h>
#include <xcpc/awt/AboutDialogImpl.h>
#include <xcpc/awt/AboutDialogListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::AboutDialog
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * AboutDialog class
 */
class AboutDialog
    : public HelpDialog
    , public AboutDialogListener
{
public: // public interface

    /**
     * default constructor
     */
    AboutDialog()
        : HelpDialog()
        , AboutDialogListener()
        , _awtAboutDialogImpl()
    {
        createAboutDialogImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~AboutDialog()
    {
        deleteAboutDialogImpl();
    }

    /**
     * AboutDialog event
     */
    virtual void onAboutDialogEvent()
    {
    }

protected: // protected interface

    /**
     * create the AboutDialog implementation
     */
    void createAboutDialogImpl();

    /**
     * delete the AboutDialog implementation
     */
    void deleteAboutDialogImpl();

protected: // protected data
    AboutDialogImpl* _awtAboutDialogImpl; /**< AboutDialog implementation */

private: // disable copy and assignment
    AboutDialog(const AboutDialog&);            /**< copy constructor disabled     */
    AboutDialog& operator=(const AboutDialog&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_AboutDialog_h__ */
