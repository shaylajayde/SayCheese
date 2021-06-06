// Homework2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Shayla Zilinsky
// ITCS 2530
// 05/27/2021
// Description: A cheese container can hold 2.76 kg of cheese. Each evening, a fromager ships containers of cheese
// to a local grocery store. The cost of producing one container of cheese is $4.12, and the profit of each container
// of cheese is $1.45.
// 
// 1. Prompt user to enter total amount of cheese produced each evening.
// 2. Outputs the number of containers needed to hold the cheese (round to nearest int.)
// 3. Output cost of producing cheese.
// 4. Output profit for producing cheese. 

#include <iostream>
// including header file cmath to be able to round my numbers
#include <cmath>
// including header file ionmanip to be able to use setprecision
#include <iomanip>

using namespace std;

const double capacity = 2.76;
const double productionCost = 4.12;
const double productionProfit = 1.45;

// Main function
int main()
{
    // declaring variables
    int kilos;
    int containers;
    float cost;
    float profit;
    int containerLength;

    // print statement
    //cout << "*******************************************************************" << endl; - this is the hardcoded statement
    cout << setw(67) << setfill('*') << "" << endl;
    //cout << "***************Welcome to my Cheesy Program***********************" << endl; - this is the hardcoded statement
    cout << setw(28) << "";
    cout << "Say cheese!";
    cout << setw(28) << "" << endl;
    // cout << setw(67) << setfill('*') << endl;   ---- this did NOT work
    cout << setw(67) << "" << endl;
    //cout << "*******************************************************************" << endl; - this is the hardcoded statement 

    // allow user to input number of kilograms of cheese produced.
    cout << "Please enter the total number of kilograms of cheese produced: ";
    cin >> kilos;

    // calculate number of containers required.
    // each container can hold 2.76kg
    // added round to round the number of containers to the nearest int
    containers = round(kilos / capacity);
    // using setw(49) left - the statement is 49 characters and I'm aligning it to the left
    // using setw(18) right - the total amount of astericks is 67 - 67 minus 49 is 18, aligning to the right
    // have to reassign setfill to space 
    cout << setw(49) << setfill(' ') << left << "The number of containers to hold the cheese is:  " << setw(18) << right << containers << endl;

    // calculate the cost of producing containers from line 41
    // each container cost $4.12 to produce
    cost = containers * productionCost;
    // setprecision to 2 to allow for 2 decimal places for cost and profit
    cout << fixed << setprecision(2);
    // I wasn't able to get the to_string example to work on my end (I kept getting a build error).
    // Ended up printing first part of string, followed by the containers variable, followed by the second part of the string
    //cout << setw(22) << left << "The cost of producing " << containers << " container(s) of cheese is: $ " << right << cost << endl; - this did NOT work
    //cout << "The cost of producing " << containers << " container(s) of cheese is: $ " << setw(12) << right << cost << endl;

    //cout << left;
    //cout << "The cost of producing " << containers << " container(s) of cheese is: $ ";
    //cout << right;
    //cout << cost << endl;
    containerLength = sizeof(containers);
    cout << setw(22) << left << "The cost of producing " << containers << " container(s) of cheese is: $ " << setw(16 - containerLength) << right << cost << endl;

    // calculate the profit from producing the containers
    // each container profits $1.45
    profit = containers * productionProfit;
    // I wasn't able to get the to_string example to work on my end (I kept getting a build error).
    // Ended up printing first part of string, followed by the containers variable, followed by the second part of the string
    // << "The profit from producing " << containers << " container(s) of cheese is: $ "  << setw(8) << right << profit << endl;
    cout << setw(26) << left << "The profit from producing " << containers << " container(s) of cheese is: $ " << setw(12 - containerLength) << right << profit << endl;
}


