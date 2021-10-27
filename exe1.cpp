#include<iostream>
using namespace std;
int main()
{
	/*--------------------------
				exe.1
	---------------------------*/

	/*__________Part 1__________*/

	//....1....//

	cout << "My first name is: Asael\n";
	cout << "My last name is: Hadar\n";
	cout << "My age is: 26\n";
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";

	//....2....//

	cout << "*************************\n";
	cout << "*My first name is: Asael*\n";
	cout << "*************************\n";
	cout << "************************\n";
	cout << "*My last name is: Hadar*\n";
	cout << "************************\n";
	cout << "***************\n";
	cout << "*My age is: 26*\n";
	cout << "***************\n";
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....3....//

	cout << "My first name is: Asael\n";
	cout << "My last name is: Hadar\n";
	int num1 = 2019, num2 = 1993;
	int Age = num1 - num2;
	cout << "My age is:" << Age << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....4....//

	cout << "*************************\n";
	cout << "*My first name is: Asael*\n";
	cout << "*************************\n";
	cout << "************************\n";
	cout << "*My last name is: Hadar*\n";
	cout << "************************\n";
	cout << "**************\n";
	cout << "*My age is:" << Age << "*" << endl;
	cout << "**************\n";
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....5....//

	int Current_year, Year_of_birth, Freshman_year;
	cout << "-program for calculating age and academic year-\n";
	cout << "Enter the current year\n";
	cin >> Current_year;
	cout << "Enter your year of birth\n";
	cin >> Year_of_birth;
	cout << "Enter the freshman year\n";
	cin >> Freshman_year;
	cout << "Your age is " << (Current_year)-(Year_of_birth) << endl;
	cout << "The number of years you study is " << (Current_year)-(Freshman_year) << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....6....//

	int Any_numb;
	cout << "Enter any number you choose\n";// Program showing number, multiply and squared of that number you choose 
	cin >> Any_numb;
	cout << "Your number:" << Any_numb << endl;
	cout << "Your double number is:" << Any_numb * 2 << endl;
	cout << "Your number squared is:" << Any_numb * Any_numb << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....7....//

	int First_number, Second_number;
	cout << "-Program to calculate the sum, multiplication and average of two numbers-\n";
	cout << "Enter the first number\n";
	cin >> First_number;
	cout << "Enter the second number\n";
	cin >> Second_number;
	cout << "The sum of numbers is:" << First_number + Second_number << endl;
	cout << "The number multiplier is:" << First_number * Second_number << endl;
	cout << "The average is:" << (First_number + Second_number) / 2 << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....8....//

	int z, x, c, v;
	cout << "-Program to calculate an average of 4 numbers and the remainder-\n";
	cout << "Enter 4 numbers you choose please:\n";
	cin >> z >> x >> c >> v;
	cout << "The average is:" << (z + x + c + v) / 4 << endl;
	cout << "The remainder of the average is: " << ((z + x + c + v) / 4) % 4 << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....9....//

	int Pre_of_oc, Tic_price, Max_seat;
	Max_seat = 1500;
	cout << "-Program for calculating profit from theater ticket sales-\n";
	cout << "Enter the precentage of occupancy please:\n";
	cin >> Pre_of_oc;
	cout << "Enter the ticket price please:\n";
	cin >> Tic_price;
	cout << "The theater profit is:" << (((Pre_of_oc * Max_seat) / 100) * Tic_price) * 0.2;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....10....//

	int cost, pre, quantity;
	cout << "store managment program\n";
	cout << "please enter the product's cost:\n";
	cin >> cost;
	cout << "please enter the qantity's product:\n";
	cin >> quantity;
	cout << "please enter presetage of discount:\n";
	cin >> pre;
	cout << "the amount payable is " << (cost* quantity) - (cost* quantity* pre / 100); 
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";


	//....11....//
	int num_1, num_2;//Program for residual calculation without modulo
	cout << "please enter tow numbers\n";
	cin >> num_1;
	cin >> num_2;
	cout << "The residual result of dividing the first number by two: \n" << num_1 - (num_2* (num_1 / num_2));
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";

	//....12....//
	
	int num;
	cout << "Enter a 2 - digit number please:\n";
	cin >> num;
	cout << "The number is: " << num << endl;
	cout << "The number with a space between digits is " << num / 10 << " " << num % 10 << endl;
	cout << "The sum of the two digits is " << (num / 10) + (num % 10) << endl;
	cout << "The multiplication table of both numbers is " << (num / 10)* (num / 10) << " " << (num / 10)* (num % 10) << endl;
	cout << "                                            " << (num % 10)* (num / 10) << " " << (num % 10)* (num % 10) << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";

	//....13....//

	int sum;
	cout << "Enter a number between 1 and 999\n";
	cin >> sum;
	cout << "The sum of digits of that number is " << (sum / 100) + ((sum / 10) % 10) + (sum % 10);
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";

	/*__________Part 2__________*/

	//....1....//

	int x_1, y_1;
	cout << "-Program calculate perimeter and area of rectangle-\n";
	cout << "Enter a number for the length\n";
	cin >> x_1;
	cout << "Enter a number for the width\n";
	cin >> y_1;
	cout << "The rectangle perimeter is " << x_1 + x_1 + y_1 + y_1 << endl;
	cout << "The rectangle area is " << x_1 * y_1 << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";

	//....2....//

	int x2_1, x2_2, y2;
	cout << "-Program calculate perimeter and area of square and rectangle-\n";
	cout << "Enter two numbers for a left dot\n";
	cin >> x2_1 >> y2;
	cout << "Enter a number for the right - point x component\n";
	cin >> x2_2;//I chose to give up the other y component to make sure the square sits parallel to the x axis
	cout << "The square perimetr is " << (x2_1 - x2_2) * 4 << endl;
	cout << "The square area is " << (x2_1 - x2_2)* (x2_1 - x2_2) << endl;
	cout << endl;
	cout << "The blocked rectangle perimeter is " << ((x2_1 - x2_2) + y2) * 2 << endl;
	cout << "The blocked rectangle area is " << y2 * (x2_2 - x2_1) << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";

	//....3....//

	int x3_1,x3_2, x3_3, y3_1, y3_2, y3_3;
	cout << "Enter two numbers for the bottom left point\n";
	cin >> x3_1 >> y3_1;
	cout << "Enter two numbers for the bottom right point\n";
	cin >> x3_2 >> y3_2;
	cout << "Enter two numbers for the top right point\n";
	cin >> x3_3 >> y3_3;
	cout << "The rectangle perimeter is " << 2 * ((y3_3 - y3_2) + (x3_2 - x3_1)) << endl;
	cout << "The rectangle area is " << (y3_3 - y3_2)* (x3_2 - x3_1) << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";

	/*__________Part 3__________*/

	//....1....//

	long int speed_1, time;
	cout << "Enter the average speed of the car (in meters per second): \n";
	cin >> speed_1;
	cout << "Enter the travel time (in seconds): \n";
	cin >> time;
	cout << "The distance the car traveled (in meters) is " << (speed_1* time) << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";

	//....2....//

	int speed_2, distance;
	cout << "Enter the average speed of the car (in kilometers per hour): \n";
	cin >> speed_2;
	cout << "The distance the car should travel (in kilometers) is:\n";
	cin >> distance;
	cout << "It will take about " << (distance / speed_2) << " hours and " << (((distance% speed_2) * 60) / speed_2) << " minutes" << endl;
	cout << "                                     \n";
	cout << "-------------------------------------\n";
	cout << "                                     \n";
}