// Random Number Generator

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//Set the random number algorithm to a different number
	srand(4); // <<< you can change this number to anything to set the algorithm to another number


	for (double x = 1; x < 100; x++)
	{
		cout << rand() << endl;
	}

	cout << "End of this script \n" << endl;



	// The most random number generator which changes every second because the "time" changes every second
	srand(time(0)); 


	for (double x = 1; x < 100; x++)
	{
		cout << 1+ (rand()%1000000) << endl; // <<< Starting from 1. Not 0 and it goes until 1000000
	}


	cout << "End of this script \n" << endl;


	//Random BTC Value Generator with decimals

	srand(time(0));

	double BTC = 1 + (rand() % 1000000) * 0.473;

	cout << "BTC Price right now is: " << BTC << endl;

	return 0;
	
}