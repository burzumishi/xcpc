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
	$(NULL)

noinst_LTLIBRARIES = \
	libxcpc-ui.la

libxcpc_ui_la_SOURCES = \
	All.cc \
	All.h \
	UI.cc \
	UI.h \
	PrivateImpl.cc \
	PrivateImpl.h \
	PrivateImplFactory.cc \
	PrivateImplFactory.h \
	$(NULL)

libxcpc_ui_la_CPPFLAGS = \
	-I$(top_srcdir)/src \
	$(NULL)

libxcpc_ui_la_LDFLAGS = \
	-L$(top_builddir)/src \
	$(NULL)

libxcpc_ui_la_LIBADD = \
	$(NULL)

if WITH_ATHENA
SUBDIRS += \
	athena

libxcpc_ui_la_CPPFLAGS += \
	-DWITH_ATHENA

libxcpc_ui_la_LIBADD += \
	$(top_builddir)/src/xcpc/ui/athena/libxcpc-athena.la
endif

if WITH_MOTIF2
SUBDIRS += \
	motif2

libxcpc_ui_la_CPPFLAGS += \
	-DWITH_MOTIF2

libxcpc_ui_la_LIBADD += \
	$(top_builddir)/src/xcpc/ui/motif2/libxcpc-motif2.la
endif

EXTRA_DIST = \
	README.md
