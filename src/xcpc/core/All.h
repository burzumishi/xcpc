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
#ifndef __XCPC_CORE_All_h__
#define __XCPC_CORE_All_h__

// ---------------------------------------------------------------------------
// Forward declarations
// ---------------------------------------------------------------------------

namespace xcpc {

namespace core {

class CPU; /* Central Processing Unit           */
class FDC; /* Floppy-Disc Controller            */
class FDD; /* Floppy-Disc Drive                 */
class JSK; /* Joystick                          */
class KBD; /* Keyboard                          */
class PAL; /* Programmable Array Logic          */
class PPI; /* Programmable Peripheral Interface */
class PSG; /* Programmable Sound Generator      */
class RAM; /* Random Access Memory              */
class ROM; /* Read Only Memory                  */
class VDC; /* Video Display Controller          */
class VGA; /* Video Gate Array                  */

} /* core */

} /* xcpc */

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __XCPC_CORE_All_h__ */
