// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program tells the user if it is a leap year and uses nested
//    if statements

#include <iostream>
#include <string>

int main() {
    // This function tells the user if it is a leap year
    std::string yearAsString;
    int yearAsInteger;

    // Input
    std::cout << "This program will tell you if it is a leap year."
        << std::endl;
    std::cout << "Enter the year: ";
    std::cin >> yearAsString;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        yearAsInteger = std::stoi(yearAsString);

        if (yearAsInteger % 4 == 0) {
            if (yearAsInteger % 100 == 0 && yearAsInteger % 400 != 0) {
                std::cout << yearAsInteger << " is not a leap year."
                    << std::endl;
            } else {
                std::cout << yearAsInteger << " is a leap year!" << std::endl;
            }
        } else {
            std::cout << yearAsInteger << " is not a leap year." << std::endl;
        }
    } catch (std::invalid_argument) {
            std::cout << yearAsString << " is not a valid input." <<std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
