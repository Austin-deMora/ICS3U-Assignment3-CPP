// Copyright (c) 2021 Austin de Mora All rights reserved.
//
// Created by: Austin de Mora
// Created on: May 2021
// This program tells youy what day it is by the number

#include <iostream>


int main() {
    // this function uses a try statement
    int chosen_number;

    // input
    std::cout << "Enter a number between 1 and 7: ";
    std::cin >> chosen_number;
    std::cout << "" << std::endl;

    // process
    switch (chosen_number) {
    case 1 :
        std::cout << "It's Sunday!" << std::endl;
        break;
    case 2 :
        std::cout << "It's Monday!" << std::endl;
        break;
    case 3 :
        std::cout << "It's Tuesday!" << std::endl;
        break;
    case 4 :
        std::cout << "It's Wednesday!" << std::endl;
        break;
    case 5 :
        std::cout << "It's Thursday!" << std::endl;
        break;
    case 6 :
        std::cout << "It's Friday!" << std::endl;
        break;
    case 7 :
        std::cout << "It's Saturday!" << std::endl;
        break;
    default :
        std::cout << "Invalid input" << std::endl;
    }
}
