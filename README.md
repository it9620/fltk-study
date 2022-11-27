# cpp-fltk-test
Project to study FLTK GUI library (toolkit).

Using with VSCode on MacOS with m1 soc.

=================================================

1)
Download latest released version of FLTK ("fulltick"):
https://www.fltk.org/software.php

=================================================

2)
Compile FLTK source to some directory.
I used VSCode, CMake configuration (autoconfig with CMake extension) and Clang compiler.
Compiling was no any trouble.
After compiling I made command "$ sudo make install" and the lib was installed into "usr/local/" subdirectories:  "include/Fl", "bin", "lib".

You also can just use Homebrew to install FLTK library.

=================================================

3)
Try to make and run simplest app with FLTK to test. The code of an app show in FLTK doc or in first commit of this repository.

You need to link FLTK library -  I have had an issue with it.
At main.cpp it can't find FLTK header files. Also CMake didn't find the FLTK binary files.

I had resolved the issue by set a path to FLTK as the path to the building directory which i used to compile FLTK from source (it still contain necessary files after compiling FLTK libs).

=================================================

Also some other information you can find in https://kickstart.best/how-to-setup-fltk-environment-in-clion-on-mac-os/


For using FLTK in VS on Windows can be useful:
https://bumpyroadtocode.com/2017/08/05/how-to-install-and-use-fltk-1-3-4-in-visual-studio-2017-complete-guide/

Some additional aspects on CMake doc:
https://cmake.org/cmake/help/latest/module/FindFLTK.html

Seems working for Clion and not only:
https://www.programmersought.com/article/93729020255/