set(LIBRARY_SRCS
    BlockingQueue.cpp
)

set(MAIN_SRCS
    main.cpp
)

add_library(LIBRARY_NAME ${LIBRARY_SRCS})

add_executable(MAIN ${MAIN_SRCS})
target_link_libraries(MAIN LIBRARY_NAME)