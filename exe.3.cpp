/*
asael hadar
308532845
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	/*--------------------------
				exe.3
	---------------------------*/

	/*__________Part 1__________*/

	int d, m, y, c, num, day;
	cout << "We will enter a date and find out what day of the week he was or will be\n";
	cout << "Please enter the day of the month\n";
	cin >> d;
	cout << "Please enter the month number\n";
	cin >> m;
	cout << "Please enter the year number\n";
	cin >> num;
	y = num % 100, c = num / 100;
	if (d > 31 || d < 1)
	{
		d = 1;
	}
	if (m < 1 || m > 12)
	{
		m = 1;
	}
	if (m == 1 || m == 2)
	{
		m = (m + 12);
		y = (y - 1);
	}
	day = (d + (26 * (m + 1)) / 10 + y + y / 4 + c / 4 - 2 * c) % 7;
	switch (day)
	{
	case 0:cout << "The day is Saturday" << "\n"; break;
	case 1:cout << "The day is Sunday" << "\n"; break;
	case 2:cout << "The day is Monday" << "\n"; break;
	case 3:cout << "The day is Tusday" << "\n"; break;
	case 4:cout << "The day is Wednesday" << "\n"; break;
	case 5:cout << "The day is Thursday" << "\n"; break;
	case 6:cout << "The day is Friday" << "\n"; break;
	}

}