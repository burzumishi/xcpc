/*
 * ObjectImpl.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_ObjectImpl_h__
#define __XCPC_AWT_ObjectImpl_h__

#include <xcpc/awt/All.h>

// ---------------------------------------------------------------------------
// xcpc::awt::ObjectImpl
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * ObjectImpl class
 */
class ObjectImpl {
public: // public interface

    /**
     * default constructor
     */
    ObjectImpl(Object& awtObject)
        : _awtObject(awtObject)
    {
    }

    /**
     * virtual destructor
     */
    virtual ~ObjectImpl()
    {
    }

protected: // protected data
    Object& _awtObject; /**< Object reference */

private: // disable copy and assignment
    ObjectImpl(const ObjectImpl&);            /**< copy constructor disabled     */
    ObjectImpl& operator=(const ObjectImpl&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_ObjectImpl_h__ */
