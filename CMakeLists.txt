CMAKE_MINIMUM_REQUIRED(VERSION 3.00 FATAL_ERROR)
project(Uebungsblatt3
        LANGUAGES CXX
        VERSION 0.0.1
        )

set(CMAKE_CXX_STANDARD 11)
add_executable(${PROJECT_NAME} src/Console.cpp src/Cursor.cpp src/Position.cpp src/SimpleInput.cpp src/Spielstein.cpp src/Tibongo.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)