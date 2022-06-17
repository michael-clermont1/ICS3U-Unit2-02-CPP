// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program calculates the area and perimeter of a rectangle
//    with radius inputted by the user

#include <iostream>

int main() {
    // this function calculates the area and perimeter inputted by user
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;

    // process
    area = length * width;
    perimeter = 2 *(length + width);

    // output
    std::cout << "" << std:: endl;
    std::cout << "Area is "<< area << "mm²." << std::endl;
    std::cout << "Perimeter is "<< perimeter << "mm." << std::endl;
    std::cout<< "\nDone." << std::endl;
}
