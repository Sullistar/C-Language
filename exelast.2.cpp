/*
asael hadar
308532845
*/

#include<iostream>
#include<cmath>
using namespace std;
/*--------------------------
			exe.4
---------------------------*/

/*__________Part 2__________*/
int big_array(int arr[], int N)
{
	int counter = 1, big_arrow = 0, first_num;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			counter = counter + 1;
			if (counter > big_arrow)
			{
				big_arrow = counter;
				first_num = i - big_arrow + 2;
			}
		}
		else counter = 1;
	}
	return first_num;
}
int main()
{
	const int SIZE = 10;
	int arr[SIZE], initial;
	cout << "Enter 10 random values for the array: ";
	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];
	initial = big_array(arr, SIZE);
	cout << "The location where the biggest arrow starts is " << initial;
}