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
			exe.2
	---------------------------*/

	/*__________Part 1__________*/

	int a, b, c, x, chois, Linear_equation, Quadratic_Equation;
	cout << "Program of calculation acording to your chois: Square / Linear Equation Value, Solution Square / Linear Equation, representation of the function\n";
	cout << "Choose a number for variable a: \n";
	cin >> a;
	cout << "Choose a number for variable b: \n";
	cin >> b;
	cout << "Choose a number for variable c: \n";
	cin >> c;
	cout << "Please enter your chois\n";
	cout << "1 for Square / Linear Equation Value, 2 for Solution Square / Linear Equation or 3 for representation of the function \n";//בהנחה שהמשתמש מכניס את אחד משלושת הערכים
	cin >> chois;
	switch (chois)
	{
		case 1://First choice for the function value
		{
			cout << "Enter a value of x: \n";
			cin >> x;
			if (a == 0)//For a linear function value
			{
				Linear_equation = x * b + c;
				cout << "f(x=" << x << ")=" << b << "*" << x << "+" << c << "=" << Linear_equation << "\n";
			}
			else//For a square function value
			{
				Quadratic_Equation = a * x * x + x * b + c;
				cout << "f(x=" << x << ")=" << a << "*" << x << "^2+" << b << "*" << x << "+" << c << "=" << Quadratic_Equation << "\n";
			}
			break;
		}
		case 2://Second choice for equation solutions
		{
			if (a == 0)//A linear equation solution
			{
				if (b != 0)
				{
					x = -c / b;
					cout << "x=" << x << "\n";
				}
				else
					cout << "no solution";
			}
			else//Solving a quadratic equation
			{
				if (b * b - 4 * a * c == 0)
				{
					cout << "x=" << -b / (2 * a);
				}
				else if(b * b - 4 * a * c < 0)
					cout << "no solution";
				else
				{
					cout << "x1=" << (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
					cout << "x1=" << (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
				}
			}
			break;
		}
		case 3://Third choice to display the function
		{
			cout << "f(x)=";
			if (a == 1)
			{
				cout << "x^2";
			}
			else if (a == -1)
				cout << "-x^2";
			else if (a != 1 && a != -1 && a != 0)
				cout <<a<<"x^2";
			if (a != 0 && b > 0)
			{
				cout << "+";
			}
			if (b == 1)
			{
				cout << "x";
			}
			else if (b == -1)
				cout << "-x";
			else if (b != 1 && b!= -1 && b != 0)
				cout << b << "x";
			if ((a != 0 || b != 0) && c > 0)
			{
				cout << "+";
			}
			if (c != 0)
			{
				cout << c;
			}
			if (a == 0 && b == 0 && c == 0)
			{
				cout << "0";
			}
			break;
		}

	}
}