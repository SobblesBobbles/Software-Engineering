cmake_minimum_required(VERSION 3.9)
project(ObserverExample)

set(CMAKE_CXX_STANDARD 11)

add_executable(ObserverExample main.cpp WeatherBalloon.cpp WeatherBalloon.h Observer.cpp Observer.h Siri.cpp Siri.h Unit.cpp Unit.h Alexa.cpp Alexa.h)