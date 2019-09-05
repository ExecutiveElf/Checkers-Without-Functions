/* Benjamin Roe
 C++ Fall 2019
 Due September 12, 2019
 Lab 2 Exploring Output
 Getting Class Schedule and Checker Board to display.
*/

#include <iostream>
using namespace std;

//Defining the strings
const string Chec = "   *   *   *   *";
const string Kers = " *   *   *   *   ";

//Assembling the board by alternating between those two strings.
int main()
{
	cout << Chec << endl;
	cout << Kers << endl;
	cout << Chec << endl;
	cout << Kers << endl;
	cout << Chec << endl;
	cout << Kers << endl;
	cout << Chec << endl;
	cout << Kers << endl;
	return 0;
}