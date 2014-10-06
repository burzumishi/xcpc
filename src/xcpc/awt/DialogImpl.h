/*
 * DialogImpl.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_DialogImpl_h__
#define __XCPC_AWT_DialogImpl_h__

#include <xcpc/awt/All.h>

// ---------------------------------------------------------------------------
// xcpc::awt::DialogImpl
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * DialogImpl class
 */
class DialogImpl {
public: // public interface

    /**
     * default constructor
     */
    DialogImpl(Dialog& awtDialog)
        : _awtDialog(awtDialog)
    {
    }

    /**
     * virtual destructor
     */
    virtual ~DialogImpl()
    {
    }

protected: // protected data
    Dialog& _awtDialog; /**< Dialog reference */

private: // disable copy and assignment
    DialogImpl(const DialogImpl&);            /**< copy constructor disabled     */
    DialogImpl& operator=(const DialogImpl&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_DialogImpl_h__ */
