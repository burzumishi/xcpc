#
# Makefile.am - Copyright (c) 2001-2014 - Olivier Poncet
#
# This file is part of XCPC
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>
#
SUBDIRS = \
	cpu \
	fdc \
	fdd \
	jsk \
	kbd \
	pal \
	ppi \
	psg \
	ram \
	rom \
	vdc \
	vga \
	$(NULL)

noinst_LTLIBRARIES = \
	libxcpc-core.la

libxcpc_core_la_SOURCES = \
	All.cc \
	All.h \
	$(NULL)

libxcpc_core_la_CPPFLAGS = \
	-I$(top_srcdir)/src \
	$(NULL)

libxcpc_core_la_LDFLAGS = \
	-L$(top_builddir)/src \
	$(NULL)

libxcpc_core_la_LIBADD = \
	$(top_builddir)/src/xcpc/core/vga/libxcpc-vga.la \
	$(top_builddir)/src/xcpc/core/vdc/libxcpc-vdc.la \
	$(top_builddir)/src/xcpc/core/rom/libxcpc-rom.la \
	$(top_builddir)/src/xcpc/core/ram/libxcpc-ram.la \
	$(top_builddir)/src/xcpc/core/psg/libxcpc-psg.la \
	$(top_builddir)/src/xcpc/core/ppi/libxcpc-ppi.la \
	$(top_builddir)/src/xcpc/core/pal/libxcpc-pal.la \
	$(top_builddir)/src/xcpc/core/kbd/libxcpc-kbd.la \
	$(top_builddir)/src/xcpc/core/jsk/libxcpc-jsk.la \
	$(top_builddir)/src/xcpc/core/fdd/libxcpc-fdd.la \
	$(top_builddir)/src/xcpc/core/fdc/libxcpc-fdc.la \
	$(top_builddir)/src/xcpc/core/cpu/libxcpc-cpu.la \
	$(NULL)

EXTRA_DIST = \
	README.md
