project(HELLO)

set(SRC_LIST main.c)
message(status "This is BINARY dir" ${HELLO_BINARY_DIR})
message(status "This is SOURCE dir" ${HELLO_SOURCE_DIR})

add_executable(hello ${SRC_LIST})
