# Compiling and Linking

1. Resolve rc file with resources (menu):

`$> windres 04_menus_and_icons.rc -O coff -o 04.res`

`windres` is a Windows resource compiler that outputs a COFF object/executable that can be linked
to a program.

[More info](https://sourceware.org/binutils/docs-2.27/binutils/windres.html)

2. Compile and link the main C file:

`$> gcc 04_menus_and_icons.c 04.res`

3. Execute the program:

`$> a.exe`