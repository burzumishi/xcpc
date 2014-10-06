/*
 * Motif2UI.h - Copyright (c) 2001-2014 - Olivier Poncet
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
#ifndef __XCPC_UI_ATHENA_Motif2UI_h__
#define __XCPC_UI_ATHENA_Motif2UI_h__

#include <xcpc/ui/PrivateImpl.h>

// ---------------------------------------------------------------------------
// xcpc::ui::Motif2UI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

/**
 * Motif2 user interface
 */
class Motif2UI : public PrivateImpl {
public: // public interface

    /**
     * default constructor
     */
    Motif2UI()
        : PrivateImpl()
    {
    }

    /**
     * virtual destructor
     */
    virtual ~Motif2UI()
    {
    }

public: // PrivateImpl interface

    /**
     * create the Motif2 user interface
     */
    virtual void create();

    /**
     * destroy the Motif2 user interface
     */
    virtual void destroy();

    /**
     * run the Motif2 user interface
     */
    virtual void run();

private: // disable copy and assignment
    Motif2UI(const Motif2UI&);            /**< copy constructor disabled     */
    Motif2UI& operator=(const Motif2UI&); /**< assignement operator disabled */
};

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// xcpc::ui::createMotif2UI
// ---------------------------------------------------------------------------

namespace xcpc {

namespace ui {

extern PrivateImpl* createMotif2UI();

} /* ui */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_UI_ATHENA_Motif2UI_h__ */
