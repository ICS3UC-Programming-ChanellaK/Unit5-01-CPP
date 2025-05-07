// Copyright (C) Chanella All rights reserved
// Created by Chanella
// Created on : May 5 2025
// This program converts temperature from Celsius to fahrenheit

#include <iostream>
#include <string>

void calculateTemp() {
    try {
        float celsius;
        float fahrenheit;
        std::string userString;

        std::cout << "Enter the temperature in celsius: ";
        std::cin >> userString;

        celsius = std::stof(userString);

        // then convert celsius to fahrenheit
        fahrenheit = (celsius * 9 / 5) + 32;
        // print the result

        std::cout << celsius << "degrees in fahrenheit is: " << fahrenheit << std::endl;
    }
    catch (std::invalid_argument) {
        std::cout << "Invalid input.Please enter a temperature" << std::endl;
    }
}

int main() {
    // this function calls the calculateTemp function
    calculateTemp();
}
