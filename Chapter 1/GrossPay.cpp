//----------------------------------------------------------
//  Name: James Makovics
//  E-mail Address: jxm1206@psu.edu
//  Class: CMPSC 121 Section
//  Project #1-1
//  Due Date: 8/22/2018
//  Calculates an employees gross pay
//----------------------------------------------------------


#include <iostream>
using namespace std;

int main() {

	double hours, rate, pay;

	//gets input from user for hours worked.
	cout << "How many hours did you work?: ";
	cin >> hours;

	//gets hourly pay rate from user
	cout << "How much did you get paid per hour?: $";
	cin >> rate;

	//calculates the pay
	pay = hours * rate;

	//displays the pay
	cout << "You have earned $" << pay << endl;
	return 0;
}
