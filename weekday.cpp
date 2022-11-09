// Copyright(c) 2022 Lucas LeBlanc All rights reserved.
//
// Created by : Lucas LeBlanc
// Created on : Nov 2022
// This program tells you what day of the week it is

#include <iostream>

int main() {
    // creating variables
    int weekday;

    // input
    std::cout << "Enter week day number 1-7: ";
    std::cin >> weekday;

    // process and output
    std::cout << "\n";
    switch (weekday) {
        case 1:
            std::cout << "The " << weekday << "st day of the week is Sunday.";
            break;
        case 2:
            std::cout << "The " << weekday << "nd day of the week is Monday.";
            break;
        case 3:
            std::cout << "The " << weekday << "rd day of the week is Tuesday.";
            break;
        case 4:
        std::cout << "The " << weekday << "th day of the week is Wednesday.";
            break;
        case 5:
            std::cout << "The " << weekday << "th day of the week is Thursday.";
            break;
        case 6:
            std::cout << "The " << weekday << "th day of the week is Friday.";
            break;
        case 7:
            std::cout << "The " << weekday << "th day of the week is Saturday.";

        default:
            std::cout << "This is not a number of the week.";
    }

    std::cout << "\n\n\nDone.\n";
}
