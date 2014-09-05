#include <iostream>
#include <string>

using namespace std;

double sideA = 0;
double sideB = 0;
double sideC = 0;
double pythagAnswer = 0;
double userAnswer;

int main()
{
	char choice;
	cout << "******************************************************************" << endl;
	cout << "****                  Welcome to Math Helper!                 ****" << endl;
	cout << "****                                                          ****" << endl;
	cout << "**** 1. Basic Arithmetic (add / subtract / multiply / divide) ****" << endl;
	cout << "**** 2. Basic Algebra                                         ****" << endl;
	cout << "**** 3. Trigonometry                                          ****" << endl;
	cout << "**** 4. Polar Coordinates                                     ****" << endl;
	cout << "**** 5. Pythagorean Theorem                                   ****" << endl;
	cout << "******************************************************************" << endl;
	cout << endl;
	cout << "Choose an option by typing in the number and hitting 'Enter' ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case '1':
		cout << "You have chosen to practice Basic Arithmetic." << endl;
		cout << endl;
		break;
	case '2':
		cout << "You have chosen to practice Basic Algebra." << endl;
		cout << endl;
		break;
	case '3':
		cout << "You have chosen to practice Trigonometry." << endl;
		cout << endl;
		break;
	case '4':
		cout << "You have chosen to practice Polar Coordinates." << endl;
		cout << endl;
		break;
	case '5':
		cout << "You have chosen to practice the Pythagorean Theorem." << endl;
		cout << endl;
		cout << "Solve for the missing side." << endl << endl;

		cout << "             /|" << endl;
		cout << "            / |" << endl;
		cout << "           /  |" << endl;
		cout << "          /   |" << endl;
		cout << "         /    |" << endl;
		cout << "      " << sideA <<  " /     | " << sideB << " " << endl;
		cout << "       /      |" << endl;
		cout << "      /       |" << endl;
		cout << "     /        |" << endl;
		cout << "    /         |" << endl;
		cout << "   /__________|" << endl;
		cout << endl;
		cout << "        " << sideC << endl;
		cout << endl << endl;

		//(sideA*sideA) + (sideB * sideB) = (sideC*sideC)
		//pick a number between 1 and 3. if =1, then randomize sideA and sideB, etc.

		cout << "Answer: ";
		cin >> userAnswer;


		break;
	default:
		cout << "Not a valid choice. Please try again." << endl;
		cout << "Choose an option by typing in the number and hitting 'Enter' ";
		cin >> choice;
		//bug: exits after inputting a wrong answer a second time
		cout << endl;
		break;
	}

}
