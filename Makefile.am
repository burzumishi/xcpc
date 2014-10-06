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
	src \
	$(NULL)

EXTRA_DIST = \
	Doxyfile.in

all-local:
	@echo "=== all-local done ==="

clean-local: clean-doc
	@echo "=== clean-local done ==="

distclean-local: distclean-doc
	@echo "=== distclean-local done ==="

install-data-local: all-doc install-doc
	@echo "=== install-data-local done ==="

uninstall-local: uninstall-doc
	@echo "=== uninstall-local done ==="

if HAVE_DOXYGEN
all-doc:
	$(DOXYGEN) Doxyfile

clean-doc:
	rm -rf $(top_builddir)/doc

distclean-doc:
	rm -rf $(top_builddir)/doc

install-doc:
	$(mkdir_p) $(DESTDIR)$(docdir)
	cp -rf doc/html $(DESTDIR)$(docdir)

uninstall-doc:
	-rm -rf $(DESTDIR)$(docdir)/html
	-rmdir $(DESTDIR)$(docdir)
else
all-doc:
	@echo "*** Doxygen is not available ***"

clean-doc:
	@echo "*** Doxygen is not available ***"

distclean-doc:
	@echo "*** Doxygen is not available ***"

install-doc:
	@echo "*** Doxygen is not available ***"

uninstall-doc:
	@echo "*** Doxygen is not available ***"
endif
