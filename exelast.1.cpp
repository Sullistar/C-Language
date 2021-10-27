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

/*__________Part 1__________*/

int main()
{
	int arr_1[6], arr_2[6], arr_sum[7] = { 0,0,0,0,0,0,0 }, arr_sub[6] = { 0,0,0,0,0,0 };
	cout << "please enter a positive integer of length 6 (separate each digit by a space, leading zeros of necessary)\n";
	for (int i = 0; i < 6; i++)
		cin >> arr_1[i];
	cout << "please enter the second positive integer\n";
	for (int i = 0; i < 6; i++)
		cin >> arr_2[i];
	cout << "The result of the sum is: ";
	for (int i = 6; i > 0; i--)
	{
		arr_sum[i] = arr_1[i - 1] + arr_2[i - 1] + arr_sum[i];
		if (arr_sum[i] > 9)
		{
			arr_sum[i - 1] = arr_sum[i] / 10;
			arr_sum[i] = arr_sum[i] % 10;
		}
	}
	for (int i = 0; i < 7; i++)
		cout << arr_sum[i];
	cout << "\nThe result of the sub is: ";
	for (int i = 5; i >= 0; i--)
	{
		if (arr_1[i] < arr_2[i])
		{
			arr_1[i] = arr_1[i] + 10;
			arr_1[i - 1] = arr_1[i - 1] - 1;
		}
		arr_sub[i] = arr_1[i] - arr_2[i];
	}
	for (int i = 0; i < 6; i++)
		cout << arr_sub[i];
}