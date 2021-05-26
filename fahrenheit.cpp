// Copyright (c) 2021 Lauren Wheatley All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program adds numbers

#include <iostream>
#include <string>

int fahrenheit() {
    int fahrenheitTemp;
    std::string tempC;
    int tempCInt;

    std::cout << "Enter a temperature in Celcius: ";
    std::cin >> tempC;
    std::cout << std::endl;

    try {
        tempCInt = std::stoi(tempC);

        fahrenheitTemp = (9 * tempCInt) / 5 + 32;

        std::cout << tempCInt << " is equal to " << fahrenheitTemp
                  << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid temperature!!!" << std::endl;
    }
}

int main() {
    fahrenheit();
}
