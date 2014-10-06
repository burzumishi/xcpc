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
noinst_LTLIBRARIES = \
	libxcpc-pal.la

libxcpc_pal_la_SOURCES = \
	PAL.cc \
	PAL.h \
	$(NULL)

libxcpc_pal_la_CPPFLAGS = \
	-I$(top_srcdir)/src \
	$(NULL)

libxcpc_pal_la_LDFLAGS = \
	-L$(top_builddir)/src \
	$(NULL)

libxcpc_pal_la_LIBADD = \
	$(NULL)

EXTRA_DIST = \
	README.md
