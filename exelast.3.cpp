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

/*__________Part 3__________*/
int average(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i + 1] = arr[i] + arr[i + 1];
	}
	return arr[9] / 10;
}
int average_high_low(int arr[], int N)
{
	int high = arr[0], low = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > high)
			high = arr[i];
		if (arr[i] < low)
			low = arr[i];
	}
	return (high+low)/2 ;
}
int sum_of_double(int arr[], int N)
{
	for (int i = 0; i < N; i=i+2)
	{
		arr[i + 2] = arr[i] + arr[i + 2];
	}
	return arr[8];
}
int sum_of_odd(int arr[], int N)
{
	for (int i = 1; i < N; i = i + 2)
	{
		arr[i + 2] = arr[i] + arr[i + 2];
	}
	return arr[9];
}
int calculate(int arr[], int N,int choice)
{
	switch (choice);
	{
	case1:
		{
			average(arr, N);
		}
	case2:
		{
			average_high_low(arr, N);
		}
	case3:
		{
			sum_of_double(arr, N);
		}
	case4:
		{
			sum_of_odd(arr, N);
		}
	}
}
int main()
{
	const int SIZE = 10;
	int arr[SIZE], choice;
	cout << "Enter 10 random values for the array: ";
	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];
	cout << "What would you like to calculate?\n1) Average value of array values\n2) Average of the largestand smallest value in the array\n3) The sum of places that are equal in the array\n4) The sum of the odd places in the array\n";
	cin >> choice;
	while (choice < 1 || choice > 4)
	{
		cout << "Your selection is not possible please enter again\n";
		cin >> choice;
	}
	cout <<"Of your choice the result is: "<<calculate(arr, SIZE, choice);
}