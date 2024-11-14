//Yang Zhang
//Lab 11 
//11.12.2024

#include<iostream>
#include<iomanip>
#include<cmath>
#include <ctime>

using namespace std;

int main() {
    //Part 1
    double alpha[50]; //Declares the double array alpha with 50 boxes
    int localCount = 0; //starts at zero because i starts at 0

    for (int i = 0; i < 50; i++) { //For loop, declares int i equals zero and runs until i is greater than 50. Every time it runs i = i + 1
        //Subsection A
        if (i < 25) { //If i is less then 25 square it by the index 
            alpha[i] = pow(i, 2); //Sets the corresponding array box to the number squared
        }
        else if (i >= 25) { //Else if its greater than 25 times index by 3
            alpha[i] = i * 3; //Sets the corresponding array box to the number times three 
        }
    //Part 2 
        if (localCount < 10) {  //Uses a seperate variable localCount and checks if its less then or equal to ten
            cout << alpha[i] << " "; //Prints the corresponding array box
            localCount = localCount + 1; //localcount adds one 
        }
        else { //If its greater than 10 then
            cout << endl; //ends line
            cout << alpha[i] << " ";
            localCount = 1; //resets count to 1
        }
    }

    //Part 3, 4, 5

    srand(time(0)); //makes the number generator random

    double beta[50]; //Declares the double array beta with 50 boxes
    int number; 
    int numHundreds = 0; //Variable for the amount of hundreds
    int sum = 0; //Variable for the sum of all the numbers
    int localCountTwo = 0; //Variable for the local counter

    cout << endl;
    cout << endl; //These two endls seperate the terminal into readable chunks

    for (int l = 0; l < 50; l++) { //for loop 
        number = rand() % 100 + 1; //random number generator
        beta[l] = number; //the corresponding array is equal to the number
        sum = sum + beta[l]; //the sum is equal to the sum plus the random number
        if (localCountTwo < 10) {  //Uses a seperate variable localCount and checks if its less then or equal to ten
            cout << beta[l] << " "; //Prints the corresponding array box
            localCountTwo = localCountTwo + 1; //localcount adds one 
        }
        else { //If its greater than 10 then
            cout << endl; //ends line
            cout << beta[l] << " ";
            localCountTwo = 1; //resets count to 1
        }
        if (beta[1] == 100) { //if the number is 100 then
            numHundreds = numHundreds + 1; //add one to the amount of hundreds in the number squence 
        }
    }

    //Prints everything
    cout << endl; 
    cout << "The average of the elements is " << sum / 50 << endl;
    cout << "There are " << numHundreds << " elements that are exactly equal to one hundred" << endl;

    return 0;
}

/*
0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361
400 441 484 529 576 75 78 81 84 87
90 93 96 99 102 105 108 111 114 117
120 123 126 129 132 135 138 141 144 147

32 48 54 81 95 93 94 41 5 56
91 19 10 63 15 19 9 46 7 43
53 59 40 61 23 33 38 68 97 49
96 9 39 29 85 25 81 56 98 41
18 7 50 61 75 84 27 57 7 4
The average of the elements is 47
There are 0 elements that are exactly equal to one hundred
*/