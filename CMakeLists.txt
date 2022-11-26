cmake_minimum_required(VERSION 3.20)
project(FLTKtest VERSION 0.1.1)

set(FLTK_DIR /Users/maymac2/vscode/fltk-1.3.8/build)

find_package(FLTK REQUIRED NO_MODULE)

find_package(OpenGL REQUIRED)

add_subdirectory(src)