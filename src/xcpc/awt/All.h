/*
 * All.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_All_h__
#define __XCPC_AWT_All_h__

#include <string>
#include <memory>

// ---------------------------------------------------------------------------
//
// Object
//  |
//  +-- Component
//  |    |
//  |    +-- Container
//  |    |    |
//  |    |    +-- Window
//  |    |    |    |
//  |    |    |    +-- Dialog
//  |    |    |    |    |
//  |    |    |    |    +-- FileDialog
//  |    |    |    |    |    |
//  |    |    |    |    |    +-- OpenDialog
//  |    |    |    |    |    |
//  |    |    |    |    |    +-- SaveDialog
//  |    |    |    |    |    |
//  |    |    |    |    |    +-- QuitDialog
//  |    |    |    |    |
//  |    |    |    |    +-- HelpDialog
//  |    |    |    |         |
//  |    |    |    |         +-- AuthorsDialog
//  |    |    |    |         |
//  |    |    |    |         +-- CopyingDialog
//  |    |    |    |         |
//  |    |    |    |         +-- VersionDialog
//  |    |    |    |         |
//  |    |    |    |         +-- AboutDialog
//  |    |    |    |
//
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// Forward declarations
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

class Object;
class Component;
class Container;
class Window;
class Dialog;
class FileDialog;
class OpenDialog;
class SaveDialog;
class QuitDialog;
class HelpDialog;
class AuthorsDialog;
class CopyingDialog;
class VersionDialog;
class AboutDialog;

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// Forward declarations
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

class ObjectImpl;
class ComponentImpl;
class ContainerImpl;
class WindowImpl;
class DialogImpl;
class FileDialogImpl;
class OpenDialogImpl;
class SaveDialogImpl;
class QuitDialogImpl;
class HelpDialogImpl;
class AuthorsDialogImpl;
class CopyingDialogImpl;
class VersionDialogImpl;
class AboutDialogImpl;

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// Forward declarations
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

class ObjectListener;
class ComponentListener;
class ContainerListener;
class WindowListener;
class DialogListener;
class FileDialogListener;
class OpenDialogListener;
class SaveDialogListener;
class QuitDialogListener;
class HelpDialogListener;
class AuthorsDialogListener;
class CopyingDialogListener;
class VersionDialogListener;
class AboutDialogListener;

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// ImplFactory
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * ImplFactory class
 */
class ImplFactory {
public: // public interface

    /**
     * default constructor
     */
    ImplFactory()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~ImplFactory()
    {
    }

    virtual ObjectImpl*        createObjectImpl(Object&)                   = 0;
    virtual ComponentImpl*     createComponentImpl(Component&)             = 0;
    virtual ContainerImpl*     createContainerImpl(Container&)             = 0;
    virtual WindowImpl*        createWindowImpl(Window&)                   = 0;
    virtual DialogImpl*        createDialogImpl(Dialog&)                   = 0;
    virtual FileDialogImpl*    createFileDialogImpl(FileDialog&)           = 0;
    virtual OpenDialogImpl*    createOpenDialogImpl(OpenDialog&)           = 0;
    virtual SaveDialogImpl*    createSaveDialogImpl(SaveDialog&)           = 0;
    virtual QuitDialogImpl*    createQuitDialogImpl(QuitDialog&)           = 0;
    virtual HelpDialogImpl*    createHelpDialogImpl(HelpDialog&)           = 0;
    virtual AuthorsDialogImpl* createAuthorsDialogImpl(AuthorsDialog&)     = 0;
    virtual CopyingDialogImpl* createCopyingDialogImpl(CopyingDialog&)     = 0;
    virtual VersionDialogImpl* createVersionDialogImpl(VersionDialog&)     = 0;
    virtual AboutDialogImpl*   createAboutDialogImpl(AboutDialog&)         = 0;

    virtual ObjectImpl*        deleteObjectImpl(ObjectImpl*)               = 0;
    virtual ComponentImpl*     deleteComponentImpl(ComponentImpl*)         = 0;
    virtual ContainerImpl*     deleteContainerImpl(ContainerImpl*)         = 0;
    virtual WindowImpl*        deleteWindowImpl(WindowImpl*)               = 0;
    virtual DialogImpl*        deleteDialogImpl(DialogImpl*)               = 0;
    virtual FileDialogImpl*    deleteFileDialogImpl(FileDialogImpl*)       = 0;
    virtual OpenDialogImpl*    deleteOpenDialogImpl(OpenDialogImpl*)       = 0;
    virtual SaveDialogImpl*    deleteSaveDialogImpl(SaveDialogImpl*)       = 0;
    virtual QuitDialogImpl*    deleteQuitDialogImpl(QuitDialogImpl*)       = 0;
    virtual HelpDialogImpl*    deleteHelpDialogImpl(HelpDialogImpl*)       = 0;
    virtual AuthorsDialogImpl* deleteAuthorsDialogImpl(AuthorsDialogImpl*) = 0;
    virtual CopyingDialogImpl* deleteCopyingDialogImpl(CopyingDialogImpl*) = 0;
    virtual VersionDialogImpl* deleteVersionDialogImpl(VersionDialogImpl*) = 0;
    virtual AboutDialogImpl*   deleteAboutDialogImpl(AboutDialogImpl*)     = 0;

private: // disable copy and assignment
    ImplFactory(const ImplFactory&);            /**< copy constructor disabled     */
    ImplFactory& operator=(const ImplFactory&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_All_h__ */
