/*
 * AthenaUI.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_UI_ATHENA_AthenaUI_h__
#define __XCPC_UI_ATHENA_AthenaUI_h__

#include <xcpc/ui/PrivateImpl.h>

// ---------------------------------------------------------------------------
// xcpc::ui::AthenaUI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

/**
 * Athena user interface
 */
class AthenaUI : public PrivateImpl {
public: // public interface

    /**
     * default constructor
     */
    AthenaUI()
        : PrivateImpl()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~AthenaUI()
    {
    }

public: // PrivateImpl interface

    /**
     * create the Athena user interface
     */
    virtual void create();

    /**
     * destroy the Athena user interface
     */
    virtual void destroy();

    /**
     * run the Athena user interface
     */
    virtual void run();

private: // disable copy and assignment
    AthenaUI(const AthenaUI&);            /**< copy constructor disabled     */
    AthenaUI& operator=(const AthenaUI&); /**< assignement operator disabled */
};

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// xcpc::ui::createAthenaUI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

extern PrivateImpl* createAthenaUI();

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_UI_ATHENA_AthenaUI_h__ */
