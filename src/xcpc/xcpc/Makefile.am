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
bin_PROGRAMS = \
	xcpc

xcpc_SOURCES = \
	EmulatorApp.cc \
	EmulatorApp.h \
	main.cc \
	main.h \
	$(NULL)

xcpc_CPPFLAGS = \
	-I$(top_srcdir)/src \
	$(NULL)

xcpc_LDFLAGS = \
	-L$(top_builddir)/src \
	$(NULL)

xcpc_LDADD = \
	$(top_builddir)/src/xcpc/ui/libxcpc-ui.la \
	$(top_builddir)/src/xcpc/core/libxcpc-core.la \
	$(top_builddir)/src/xcpc/base/libxcpc-base.la \
	$(NULL)

EXTRA_DIST = \
	README.md
