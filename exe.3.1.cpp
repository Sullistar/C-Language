/*
asael hadar
308532845
*/

#include<iostream>
#include<cmath>
using namespace std;
/*--------------------------
			exe.3
---------------------------*/

/*__________Part 2__________*/

void display_equation(int a, int b, int c)
{
	if (a == 1)
	{
		cout << "x^2";
	}
	else if (a == -1)
		cout << "-x^2";
	else if (a != 1 && a != -1 && a != 0)
		cout << a << "x^2";
	if (b > 0)
	{
		cout << "+";
	}
	if (b == 1)
	{
		cout << "x";
	}
	else if (b == -1)
		cout << "-x";
	else if (b != 1 && b != -1 && b != 0)
		cout << b << "x";
	if (b != 0 && c > 0)
	{
		cout << "+";
	}
	if (c != 0)
	{
		cout << c;
	}
	if (b == 0 && c == 0)
	{
		cout << a << "x^2";
	}
	cout << "=0\n";
}
bool good_no_solution(int a, int b, int c)
{
	if (b * b - 4 * a * c < 0)
	{
		return true;
	}
	else
		return false;
}
bool good_one_solution(int a, int b, int c, double x1)
{
	int dis = (b * b - 4 * a * c);
	if ((dis == 0) && ((x1 - 0.05 <= -b / (2 * a)) && (x1 + 0.05 >= -b / (2 * a))))
	{
		return true;
	}
	else
		return false;
}
bool good_two_solution(int a, int b, int c, double x1, double x2)
{
	int dis = (b * b - 4 * a * c);
	double solution_1 = ((-b) + sqrt(dis)) / (2 * a), solution_2 = (-b - sqrt(dis)) / (2 * a);
	if (dis > 0 && (x1 - 0.05 <= solution_1 && x1 + 0.05 >= solution_1) && (x2 - 0.05 <= solution_2 && x2 + 0.05 >= solution_2))
	{
		return true;
	}
	if (dis > 0 && (x1 - 0.05 <= solution_2 && x1 + 0.05 >= solution_2) && (x2 - 0.05 <= solution_1 && x2 + 0.05 >= solution_1))
	{
		return true;
	}
	else
		return false;
}
int main()
{
	bool flag;
	int a, b, c, round_num = 1, score_1 = 0, score_2 = 0, choic, player, player_2;
	double x1, x2;
	cout << "Welcome to the King of Equations game!\n";
	while (round_num <= 3 || (round_num > 3 && score_1 == score_2))
	{
		cout << "The round number is: " << round_num << "\n";
		cout << "The number 1 player's score is: " << score_1 << "\n";
		cout << "The number 2 player's score is: " << score_2 << "\n";
		for (player = 1; player < 3; player++)
		{
			cout << "Player " << player << " Please enter values for a, b and c \n";
			cin >> a >> b >> c;
			while (a == 0)
			{
				cout << "If 'a' is 0, the equation will not be square, enter this value again\n";
				cin >> a;
			}
			display_equation(a, b, c);
			if (player == 1)
			{
				player_2 = 2;
			}
			else
				player_2 = 1;
			cout << "Player "<< player_2 <<" Please choose a solution for the equation:\n";
			cout << "1. no solution\n";
			cout << "2. one solution\n";
			cout << "3. two solutions\n";
			cin >> choic;
			while (choic > 3 || choic < 1)
			{
				cout << "Your choice is not possible, enter 1, 2 or 3\n";
				cin >> choic;
			}
			switch (choic)
			{
				case 1:
				{
					flag = good_no_solution(a, b, c);
					break;
				}
				case 2:
				{
					cout << "Enter the solution\n";
					cin >> x1;
					flag = good_one_solution(a, b, c, x1);
					break;
				}
				case 3:
				{
					cout << "Enter the solutions\n";
					cout << "x1=";
					cin >> x1;
					cout << "x2=";
					cin >> x2;
					flag = good_two_solution(a, b, c, x1, x2);
					break;
				}
			}
			if (flag && player == 1)
			{
				score_2++;
				cout << "Excellent! heidad player " << player << "! You deserve a point! you got it!\n";
			}
			else if (flag && player == 2)
			{
				score_1++;
				cout << "Excellent! heidad player " << player << "! You deserve a point! you got it!\n";
			}
			else
				cout << "WRONG!!\n";
		}
		round_num++;
	}
	if (score_1 > score_2)
	{
		cout << "Congratulations !! Player 1 is the winner !!\n";
	}
	else
		cout << "Congratulations !! Player 2 is the winner !!\n";
}
