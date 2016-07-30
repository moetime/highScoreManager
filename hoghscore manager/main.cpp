#include <iostream>
#include <string>
#include <sstream>

// custom headers
#include "user.h"
#include "FileIO.h"

using namespace std;

void menuSelector(int); // prototype  
void showMenu();
int main() {

	string fname;
	string lname;
	string userName;

	int age;
	int userInput;
	int Score;
	int highScore;
	int lowScore;


	//confirm a login by the user
	cout << "Please login" << endl;

	cin >> userName;

		login(userName);
		//login(userName);




	/*cout << "To start things we need some info from you." << endl;
	cout << "\nPlease enter your first name:";
	cin >> fname;
	cout << "\nNow lets have your last name.";
	cin >> lname;
	cout << "\nYour age please?";
	cin >> age;
	cout << "\nPlease create a user name:";
	cin >> userName;
	cout << "\nSo your age is " << age << ".";
	cout << "\nYour user name is " << userName << ".";
	cout << "\n";*/



	showMenu();
	cin >> userInput;
	menuSelector(userInput);

	cin.get();
	cin.get();

	return 0;
}



void showMenu() {

	cout << "\nPlease select a number 1-5:" << endl << endl;
	cout << "\n1 Set Score:" << endl;
	cout << "\n2 Show High Score:" << endl;
	cout << "\n3 Update User:" << endl;
	cout << "\n4 Delete User:" << endl;
	cout << "\n5 To Exit:" << endl;
}

void menuSelector(int userInput) {
	cout << "Input is " << userInput << endl;
	switch (userInput) {
	case 1:
		cout << "Print high score:";
		break;
	case 2:
		cout << "Show high score list:";
		break;
	case 3:
		cout << "Update user information:";
		break;
	case 4:
		cout << "Delete User:";
		break;
	case 5:
		cout << "Press 5 to exit:";
		break;
	}
}