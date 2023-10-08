#We're going to define the classes as a library
#On linux this will be defined as a static library or so file
#depending on how we compile it. This will get linked to main 
#and later linked to our tests
set(LIBRARY_SRCS
    BlockingQueue.cpp
)

set(MAIN_SRCS
    main.cpp
)
#create the library
add_library(LIBRARY_NAME ${LIBRARY_SRCS})

add_executable(MAIN ${MAIN_SRCS})
target_link_libraries(MAIN LIBRARY_NAME)#link the library to the main exe