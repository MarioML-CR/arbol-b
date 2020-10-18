cmake_minimum_required(VERSION 3.17)
project(arbol_b)

set(CMAKE_CXX_STANDARD 20)

add_executable(arbol_b src/ui/main.cpp src/ui/utilitario/Validar.cpp src/ui/utilitario/Validar.h src/tl/Gestor.cpp src/tl/Gestor.h src/bl/Pagina.cpp src/bl/Pagina.h src/bl/ArbolB.cpp src/bl/ArbolB.h)