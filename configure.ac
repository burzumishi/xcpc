#
# configure.ac - Copyright (c) 2001-2014 - Olivier Poncet
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

# Package informations
# --------------------

m4_define([pkg_name], [xcpc])
m4_define([pkg_major_version], [0])
m4_define([pkg_minor_version], [0])
m4_define([pkg_micro_version], [0])
m4_define([pkg_interface_age], [0])
m4_define([pkg_binary_age], [m4_eval(100 * pkg_minor_version + pkg_micro_version)])
m4_define([pkg_version], [pkg_major_version.pkg_minor_version.pkg_micro_version])
m4_define([pkg_bugreport], [ponceto@free.fr])

# Libtool informations
# --------------------

m4_define([lt_release], [pkg_major_version.pkg_minor_version])
m4_define([lt_current], [m4_eval(100 * pkg_minor_version + pkg_micro_version - pkg_interface_age)])
m4_define([lt_revision], [pkg_interface_age])
m4_define([lt_age], [m4_eval(pkg_binary_age - pkg_interface_age)])

# Autoconf/Automake
# -----------------

AC_INIT([pkg_name], [pkg_version], [pkg_bugreport])
AM_INIT_AUTOMAKE
LT_INIT

AC_PROG_CC
AC_PROG_CXX
AC_PROG_LEX
AC_PROG_YACC

AC_CHECK_PROGS([DOXYGEN], [doxygen])
AM_CONDITIONAL([HAVE_DOXYGEN], [test -n "${DOXYGEN}"])

AC_ARG_WITH(athena, [AS_HELP_STRING([--with-athena], [use Athena widget set])], [with_athena=yes], [with_athena=no])
AC_ARG_WITH(motif2, [AS_HELP_STRING([--with-motif2], [use Motif2 widget set])], [with_motif2=yes], [with_motif2=no])

AM_CONDITIONAL([WITH_ATHENA], [test "${with_athena}" = "yes"])
AM_CONDITIONAL([WITH_MOTIF2], [test "${with_motif2}" = "yes"])

PACKAGE_MAJOR_VERSION="pkg_major_version"
PACKAGE_MINOR_VERSION="pkg_minor_version"
PACKAGE_MICRO_VERSION="pkg_micro_version"
PACKAGE_INTERFACE_AGE="pkg_interface_age"

AC_SUBST(PACKAGE_MAJOR_VERSION)
AC_SUBST(PACKAGE_MINOR_VERSION)
AC_SUBST(PACKAGE_MICRO_VERSION)
AC_SUBST(PACKAGE_INTERFACE_AGE)

AC_DEFINE(PACKAGE_MAJOR_VERSION, [pkg_major_version], [Define the package major version])
AC_DEFINE(PACKAGE_MINOR_VERSION, [pkg_minor_version], [Define the package minor version])
AC_DEFINE(PACKAGE_MICRO_VERSION, [pkg_micro_version], [Define the package micro version])
AC_DEFINE(PACKAGE_INTERFACE_AGE, [pkg_interface_age], [Define the package interface age])

LT_RELEASE="lt_release"
LT_CURRENT="lt_current"
LT_REVISION="lt_revision"
LT_AGE="lt_age"
LT_VERSION_INFO="lt_current:lt_revision:lt_age"

AC_SUBST(LT_RELEASE)
AC_SUBST(LT_CURRENT)
AC_SUBST(LT_REVISION)
AC_SUBST(LT_AGE)
AC_SUBST(LT_VERSION_INFO)

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
	Makefile
	Doxyfile
	src/Makefile
	src/xcpc/Makefile
	src/xcpc/base/Makefile
	src/xcpc/core/Makefile
	src/xcpc/core/cpu/Makefile
	src/xcpc/core/fdc/Makefile
	src/xcpc/core/fdd/Makefile
	src/xcpc/core/jsk/Makefile
	src/xcpc/core/kbd/Makefile
	src/xcpc/core/pal/Makefile
	src/xcpc/core/ppi/Makefile
	src/xcpc/core/psg/Makefile
	src/xcpc/core/ram/Makefile
	src/xcpc/core/rom/Makefile
	src/xcpc/core/vdc/Makefile
	src/xcpc/core/vga/Makefile
	src/xcpc/awt/Makefile
	src/xcpc/ui/Makefile
	src/xcpc/ui/athena/Makefile
	src/xcpc/ui/motif2/Makefile
	src/xcpc/xcpc/Makefile
])
AC_OUTPUT
