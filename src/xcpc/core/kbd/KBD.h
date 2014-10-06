/*
 * KBD.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_CORE_KBD_KBD_h__
#define __XCPC_CORE_KBD_KBD_h__

#include <xcpc/base/Resettable.h>

// ---------------------------------------------------------------------------
// xcpc::core::KBD
// ---------------------------------------------------------------------------

namespace xcpc {

namespace core {

/**
 * Keyboard class
 */
class KBD : public base::Resettable {
public: // public interface

    /**
     * default constructor
     */
    KBD()
    {
        initialize();
    }

    /**
     * virtual destructor
     */
    virtual ~KBD()
    {
        finalize();
    }

public: // resettable interface

    /**
     * reset the KBD instance
     */
    virtual void reset();

private: // private interface

    /**
     * initialize the KBD instance
     */
    void initialize();

    /**
     * finalize the KBD instance
     */
    void finalize();

private: // disable copy and assignement
    KBD(const KBD&);            /**< copy constructor disabled     */
    KBD& operator=(const KBD&); /**< assignement operator disabled */
};

} /* core */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_CORE_KBD_KBD_h__ */
