// Copyright(c) 2022 Lucas LeBlanc All rights reserved.
//
// Created by: Lucas LeBlanc
// Created on: October 2022
// This program tells you what day of the weak it is

#include <iostream>

using namespace std;

int main() {
    int weekday;

    cout << "Enter weekday day number (1-7) : ";
    cin >> weekday;

    if (weekday == 1) {
        cout << endl
             << " The 1st day of the week is Sunday";

    } else if (weekday == 2) {
        cout << endl
             << "The 2nd day of the week is Monday";

    } else if (weekday == 3) {
        cout << endl
             << "The 3rd day of the week is Tuesday";

    } else if (weekday == 4) {
        cout << endl
             << "The 4th day of the week is Wednesday";

    } else if (weekday == 5) {
        cout << endl
             << "The 5th day of the week is Thursday";

    } else if (weekday == 6) {
        cout << endl
             << "The 6th day of the week is Friday";

    } else if (weekday == 7) {
        cout << endl
             << "The 7th day of the week is Saturday";

    } else {
        cout << endl
             << "This is not a number of the week.";
    }

    return 0;

    std::cout << std::endl;
    std::cout << "Done.";
}
