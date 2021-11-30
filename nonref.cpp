/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Strickland
 */


#include <iostream>
#include <string>
using namespace std;

void goToWebsite(const int num);
void goToTrustedWebsite(int* num);

int main() {
    int myNum = 0;
    cout << "before first call: " << myNum << endl;
    // can edit my number
    goToTrustedWebsite(&myNum);
    cout << "after first call: " << myNum << endl;
    // can't edit my number
    goToWebsite(myNum);
    cout << "after second call: " << myNum << endl;
    return 0;
}

void goToTrustedWebsite(int* num) {
    // now I can edit 
    *num = 3;
}

void goToWebsite(const int num) {
    // can't edit the original number, we only have a copy
    //num = 6;
}