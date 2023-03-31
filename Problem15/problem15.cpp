#include <iostream>

using namespace std;

int main()
{
	//Write a C++ program to accept 10 numbers from the user and calculate how many even numbers and how many odd numbers. 

	int evens = 0, odds = 0, n;

	cout << "Ener 10 nubmers: " << endl;

	for (int i = 1; i <= 10; i++)
	{
		cin >> n;
		if (n % 2 == 0 || n == 0)
		{
			evens += 1;
		}
		else
		{
			odds += 1;
		}
	}
	cout << "Numbers of even integers: " << evens << endl << "Number of odd integers: " << odds;

	return 0;
}