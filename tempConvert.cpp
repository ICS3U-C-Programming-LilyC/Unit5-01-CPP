// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/21/2023
// This program will convert
// temperatures from celsius
// to fahrenheit.
#include <iostream>

void fahrenheit_temp() {
    // Declaring variables.
    std::string tempCelsiusString;

    // Explaining my program to the user.
    std::cout << "Welcome to my program!";
    std::cout <<
    "It will convert a temperature from celsius(as a decimal) to fahrenheit.\n";

        // Getting user input for temperature in celsius.
        std::cout
        << "Enter a temperature in celsius: ";
        std::cin >> tempCelsiusString;

    // Using a try catch to catch any errors
    // and convert the user's input to a float.
    try {
        float tempCelsiusInteger = std::stof(tempCelsiusString);

        // Calculating the converted temperature.
        float tempFahrenheit = 9.0 / 5.0 * tempCelsiusInteger + 32.0;

        // Displaying the converted temperature to the user.
        std::cout << "Your temperature " <<
        tempCelsiusInteger << " °C is " << tempFahrenheit << " °F\n";

        // Catching any errors.
    } catch (std::invalid_argument) {
        std::cout << "Invalid temperature.\n";
    }
}

int main() {
     // Calling function to execute its code.
     fahrenheit_temp();
     return 0;
}
