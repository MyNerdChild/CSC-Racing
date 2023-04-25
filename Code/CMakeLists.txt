cmake_minimum_required(VERSION 3.23)
project(CourseProject_Starting_Code_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CourseProject_Starting_Code_2
        CSCRacing.cpp
        Racetrack.cpp
        Racetrack.h Cars.cpp Cars.h Gameplay.cpp Gameplay.h)
