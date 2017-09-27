/*
Julian Haddad - 9/25/2017  Period 3
Program Problem 2
Putting in inputs
*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int Disney; // Have you been to Disney Land? 
	char first_letter; // First letter of your email?
	bool Procrastinate; // Do you procrastinate?
	double Grade; // What is your grade in Computer Science?

	// User Queries 
	cout << "How many times have you gone to disney land?" << endl;
	cin >> Disney;
	pause;
	cout << "What is the first letter of your email?" << endl;
	cin >> first_letter;
	pause;
	cout << "You procrastinate (1) True or (0) False : (1/0) " << endl;
	cin >> Procrastinate;
	pause;
	cout << "What is your grade in Computer Science? (to the nearest hundredth place) : " << endl;
	cin >> Grade;
	pause;
	// After question
	cout << "You have been to Disney land " << Disney << " times." << endl;
	cout << "The first letter of your email is " << first_letter << endl;
	cout << boolalpha << "It is " << Procrastinate << " that you procrastinate." << endl;
	cout << "Your grade in Compuer Science is : " << Grade << endl;
	
	// Pause
	pause();
}