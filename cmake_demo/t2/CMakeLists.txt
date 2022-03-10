project(HELLO)

install(FILES COPYRIGHT README DESTINATION share/doc/cmake/t2)
install(PROGRAMS runhello.sh DESTINATION bin)
install(DIRECTORY doc/ DESTINATION share/doc/cmake/t2)

add_subdirectory(src bin)
