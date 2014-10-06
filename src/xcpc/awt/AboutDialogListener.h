/*
 * AboutDialogListener.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_AboutDialogListener_h__
#define __XCPC_AWT_AboutDialogListener_h__

#include <xcpc/awt/All.h>

// ---------------------------------------------------------------------------
// xcpc::awt::AboutDialogEvent
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * AboutDialogEvent struct
 */
struct AboutDialogEvent {
    AboutDialog& awtAboutDialog;
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// xcpc::awt::AboutDialogListener
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * AboutDialogListener class
 */
class AboutDialogListener {
public: // public interface

    /**
     * AboutDialog event
     */
    virtual void onAboutDialogEvent(const AboutDialogEvent&) = 0;

protected: // protected interface

    /**
     * default constructor
     */
    AboutDialogListener()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~AboutDialogListener()
    {
    }
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_AboutDialogListener_h__ */
