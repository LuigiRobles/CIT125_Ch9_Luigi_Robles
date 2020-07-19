// CIT125_Ch9_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro To C++ Luigi Robles
// 07-18-2020 Summer Term
// Ch.9 Pg. 290 Figure 9-11 Guessing Game Program

#include <iostream>
#include <ctime> //required for time function
#include <cstdlib> //directive for srand
using namespace std;

int main()
{
	//declare and initialize variables
	int randomNumber = 0;
	int numberGuess = 0;

	//generate a random number from 1 through 10
	srand(static_cast<int>(time(0))); //use of srand and time function
	randomNumber = 1 + rand() % (10 - 1 + 1);

	//get first guess from user
	cout << "Guess a number from 1 through 10: ";
	cin >> numberGuess; // input part of IPO

	//while loop
	while (numberGuess != randomNumber)
	{
		cout << "Sorry, guess again: ";
		cin >> numberGuess;
	}	//end while

	cout << endl << "Yes, the number is "
		<< randomNumber << "." << endl; // output part of IPO

	return 0;
} //end of main function
