/*
 * Object.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_AWT_Object_h__
#define __XCPC_AWT_Object_h__

#include <xcpc/awt/All.h>
#include <xcpc/awt/ObjectImpl.h>
#include <xcpc/awt/ObjectListener.h>

// ---------------------------------------------------------------------------
// xcpc::awt::Object
// ---------------------------------------------------------------------------

namespace xcpc {

namespace awt {

/**
 * Object class
 */
class Object : public ObjectListener {
public: // public interface

    /**
     * default constructor
     */
    Object()
        : ObjectListener()
        , _awtObjectImpl()
    {
        createObjectImpl();
    }

    /**
     * virtual destructor
     */
    virtual ~Object()
    {
        deleteObjectImpl();
    }

    /**
     * Destroy event
     */
    virtual void onDestroy()
    {
    }

protected: // protected interface

    /**
     * create the Object implementation
     */
    void createObjectImpl();

    /**
     * delete the Object implementation
     */
    void deleteObjectImpl();

protected: // protected data
    ObjectImpl* _awtObjectImpl; /**< Object implementation */

protected: // protected static data
    static ImplFactory* _awtImplFactory; /**< Implementation factory */

private: // disable copy and assignment
    Object(const Object&);            /**< copy constructor disabled     */
    Object& operator=(const Object&); /**< assignement operator disabled */
};

} /* awt */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_AWT_Object_h__ */
