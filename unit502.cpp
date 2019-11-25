// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program gives the percentage of levels

#include <iostream>

double area(float base_user, float height_user) {
    // creating variable
    float area;

    // Process
    area = (base_user * height_user) / 2;
    if (base_user <= 0 || height_user <=0) {
        std::cout << "The value must be more than 0!" << std::endl;
        return 0;
    }

    // Output
    std::cout << "The area of the triangle is " << area << "cm^2" << std::endl;
}


main() {
    // This function gets input and call other functions
    float base;
    float height;
    std::string base_str;
    std::string height_str;

    // Input
    std::cout << "Please enter the base (cm): ";
    std::cin >> base_str;
    std::cout << "Please enter the height (cm): ";
    std::cin >> height_str;

    // Process
    try {
        base = std::stof(base_str);
        height = std::stof(height_str);
    } catch(std::invalid_argument) {
        std::cout << "\nWrong input!!!" << std::endl;
        return 0;
    }

    // Calling another function
    area(base, height);
}
