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
	libxcpc-base.la

libxcpc_base_la_SOURCES = \
	Application.cc \
	Application.h \
	ExceptionHandler.cc \
	ExceptionHandler.h \
	TerminateHandler.cc \
	TerminateHandler.h \
	SharedPtr.cc \
	SharedPtr.h \
	UniquePtr.cc \
	UniquePtr.h \
	Resettable.cc \
	Resettable.h \
	Runnable.cc \
	Runnable.h \
	$(NULL)

libxcpc_base_la_CPPFLAGS = \
	-I$(top_srcdir)/src \
	$(NULL)

libxcpc_base_la_LDFLAGS = \
	-L$(top_builddir)/src \
	$(NULL)

libxcpc_base_la_LIBADD = \
	$(NULL)

EXTRA_DIST = \
	README.md
