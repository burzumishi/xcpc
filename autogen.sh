#!/bin/sh

libtoolize
aclocal
autoconf
autoheader

ln -sf README.md README

automake -a

if [ -f "configure" ]; then
	./configure --prefix=/usr
fi;

