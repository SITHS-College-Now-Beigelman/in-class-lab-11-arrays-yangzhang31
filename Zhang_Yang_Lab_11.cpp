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

    //Part 3

    srand(time(0)); //makes the number generator random

    double beta[50]; //Declares the double array beta with 50 boxes
    int number; 
    int numHundreds = 0; //Variable for the amount of hundreds
    int sum = 0; //Variable for the sum of all the numbers

    cout << endl;
    cout << endl; //These two endls seperate the terminal into readable chunks

    for (int l = 0; l < 50; l++) { //for loop 
        number = rand() % 100 + 1; //random number generator
        beta[l] = number; //the corresponding array is equal to the number
        sum = sum + beta[l]; //the sum is equal to the sum plus the random number
        cout << beta[l] << " "; //Prints each number
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