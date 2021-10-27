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

/*__________Part 4__________*/
bool magic_square(int matrix[][3], int& magic_sum)
{
	int sum;
	magic_sum = matrix[2][0] + matrix[1][1] + matrix[0][2];
	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0 ; j < 3; j++)
		{
			sum = sum + matrix[i][j];
		}
		if (sum != magic_sum)
			return false;
	}
	for (int i = 0; i < 3; i++)
	{
		sum = 0;
		for (int j = 0 ; j < 3; j++)
		{
			sum = sum + matrix[j][i];
		}
		if (sum != magic_sum)
		return false;
	}
	if (matrix[0][0] + matrix[1][1] + matrix[2][2] != magic_sum)
		return false;
	return true;
}
bool magic__square(int matrix[][10], int& num_of_ms)
{
	int trinity[3][3],magic_sum;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			for (int u = 0; u < 3; u++)
			{
				for (int v = 0; v < 3; v++)
				{
					trinity[u][v] = matrix[i + u][j + v];
				}
			}
			if (magic_square(trinity, magic_sum) == true)
			{
				num_of_ms++;
				cout << magic_sum<<"\n";
			}
		}
	}
	if (num_of_ms > 0)
		return true;
	return false;
}
int main()
{
	const int SIZE=10;
	int matrix[SIZE][SIZE], num_of_ms=0, magic_sum=0;
	cout << "Enter numbers for a 10x10 array\n";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << matrix[i][j]<<"\t";
		}
		cout << "\n";
	}
	cout<< "The magical sums are:\n";
	if (magic__square(matrix, num_of_ms))
		cout << "\nAnd there are " << num_of_ms << " magic square in the matrix";
	else
		cout << "There are no magic matrix at all\n";
}