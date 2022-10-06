/*
PIC 10A Homework 1, printw.cpp
Author: Moris Gomez
UID: 705089833
Discussion Section: 5B
Date: 10/07/2022
*/

#include <iostream> //includes the iostream library file to access features such as cout, cin and endl.
using namespace std;

int main() { //creates our main function with an expected future return value of an integer.
    cout << "\"Hello \'W\'!\"" << endl; //cout outputs our string in the console.
    cout << "**************" << endl; //endl starts the following line of code on a new line in the console.
    cout << " \\    /" << "\\    /" << endl; //the backslash is a special character here relative to the forward slash.
    cout << "  \\  /" << "  \\  /" << endl;
    cout << "   \\/" << "    \\/" <<  endl;
    cout << "**************";
    return 0; //returns an integer value of zero to conclude the main function started in line 12.
}