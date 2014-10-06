/*
 * PrivateImplFactory.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_UI_PrivateImplFactory_h__
#define __XCPC_UI_PrivateImplFactory_h__

#include <xcpc/ui/All.h>

// ---------------------------------------------------------------------------
// xcpc::ui::PrivateImplFactory
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

/**
 * PrivateImpl factory
 */
class PrivateImplFactory {
public: // public interface

    /**
     * build method
     *
     * @param name specifies the UI backend
     *
     * @return the UI private implementation
     */
    PrivateImpl* create(const std::string& name);

private: // disable ctor and dtor
    PrivateImplFactory(); /**< constructor disabled */
   ~PrivateImplFactory(); /**< destructor disabled  */

private: // disable copy and assignment
    PrivateImplFactory(const PrivateImplFactory&);            /**< copy constructor disabled     */
    PrivateImplFactory& operator=(const PrivateImplFactory&); /**< assignement operator disabled */
};

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_UI_PrivateImplFactory_h__ */
