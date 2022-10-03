// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program calculates total from subtotal and tax

#include <iomanip>
#include <iostream>

int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.15;
    float tax;
    float subTotal;
    float total;

    // input
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // process
    tax = +subTotal * HST;
    total = subTotal + tax;

    // output
    std::cout << "" << std::endl;
    std::cout << "The HST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total cost is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
