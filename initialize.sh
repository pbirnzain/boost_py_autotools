#! /bin/sh

libtoolize
autoheader
aclocal -I m4
automake --add-missing
autoconf
./configure
make