cmake_minimum_required(VERSION 4.2)
project(polymorphism_hw_contact)

set(CMAKE_CXX_STANDARD 20)

add_executable(polymorphism_hw_contact main.cpp
        Contact.cpp
        Contact.h
        Person.cpp
        Person.h
        Colleague.cpp
        Colleague.h
        Friend.cpp
        Friend.h
        Date.h
        Date.cpp
        PhoneBook.cpp
        PhoneBook.h)
