#include <iostream>
#include <string>
#include <sstream>


using namespace std;

void menuSelector(int); // prototype  
void showMenu();
int main() {

	string fname;
	string lname;
	int age;
	string userName;
	int userInput;
	int Score;
	int highScore;
	int lowScore;
	string fullName;
	cout << "To start things we need some info from you." << endl;
	cout << "\nPlease enter your first name:";
	cin >> fname;
	cout << "\nNow lets have your last name.";
	cin >> lname;
	cout << "\nYour age please?";
	cin >> age;
	cout << "\nPlease create a user name:";
	cin >> userName;
	fullName = fname + " " + lname;
	cout << "\nSo your name is " << fullName << " and your age is" << age << ".";
	cout << "\nYour user name is " << userName << ".";
	cout << "\n";



	showMenu();
	cin >> userInput;
	menuSelector(userInput);

	cin.get();
	cin.get();

	return 0;
}

void showMenu() {

	cout << "\nPlease select a number 1-5:" << endl << endl  ;
	cout << "\n1 Set Score:" << endl;
	cout << "\n2 Show High Score:" << endl;
	cout << "\n3 Update User:" << endl;
	cout << "\n4 Delete User:" << endl;
	cout << "\n5 To Exit:" << endl;

}




void menuSelector(int userInput) {


	cout  << "Input is "<< userInput<<endl;
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
