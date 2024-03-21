cmake_minimum_required(VERSION 3.25)
project(Laborator_9_10___11___12__poo)

set(CMAKE_CXX_STANDARD 14)

include_directories("Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP")

add_executable(Laborator_9_10___11___12__poo
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Drink.cpp"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Drink.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/ElementNotFoundException.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/EntityValidator.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/InvalidCodeException.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/main.cpp"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Money.cpp"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Money.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/MoneyValidator.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Repository.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/RepositoyFile.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Service.cpp"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Service.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Tests.cpp"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/Tests.h"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/UI.cpp"
        "Laborator_9-10(+11 & 12)_poo/Laborator9-10-OOP/UI.h")
