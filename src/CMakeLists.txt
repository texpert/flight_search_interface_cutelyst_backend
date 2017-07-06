file(GLOB_RECURSE cutelyst_SRCS *.cpp *.h)

set(cutelyst_SRCS
    ${cutelyst_SRCS}
    ${TEMPLATES_SRC}
)

# Create the application
add_library(flight_search_interface_cutelyst_backend SHARED ${cutelyst_SRCS})

# Link to Cutelyst
target_link_libraries(flight_search_interface_cutelyst_backend
    Cutelyst::Core
    Qt5::Core
    Qt5::Network
    Qt5::Networkauth
    Cutelyst::View::JSON
)
