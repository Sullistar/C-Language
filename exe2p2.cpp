/*
asael hadar
308532845
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*--------------------------
			exe.2
	---------------------------*/

	/*__________Part 2__________*/
	string name, username;
	long long int ID, partID, sum = 1, j;
	cout << "please enter your first name:\n";
	cin >> name;
	cout << "please enter your username:\n";
	cin >> username;
	cout << "please enter your ID:\n";
	cin >> ID;
	while (sum % 10 != 0)
	{
		while (ID / 1000000000 != 0 || ID / 10000 == 0) //Literature range will be from 6-9
		{
			cout << "Error typing, please enter again/n";
			cin >> ID;
		}
		j = 1;
		sum = 0;
		while (ID != 0)
		{
			partID = ID % 10;
			if (j % 2 == 0)
			{
				partID = partID * 2;
				partID = (partID / 10) + (partID % 10);
			}
			sum = sum + partID;
			j++;
			ID = ID / 10;
		}
		if (sum % 10 != 0)
		{
			cout << "Error typing, please enter again/n";
			cin >> ID;
		}
	}
	cout << "Welcome! Your account has been successfully opened\n";
}