add_library(manager
    manager.cpp
    manager.hpp
)

target_link_libraries(manager
    PRIVATE board
    PRIVATE history
)
