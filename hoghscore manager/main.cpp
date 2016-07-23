#include <iostream>
#include <string>

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
	cout << "To start things we need some info from you.";
	cout << "Please enter your first name:" << endl;
	cin >> fname;
	cout << "Now lets have your last name" << endl;
	cin >> lname;
	cout << "Your age please?" << endl;
	cin >> age;
	cout << "Please choose a user name:" << endl;
	cout << "So your name is " << fname << lname << "and your age is" << age << endl;
	

	showMenu();
	cin >> userInput;
	menuSelector(userInput);

	cin.get();
	cin.get();

	return 0;
}

void showMenu() {

	cout << "Please select a number 1-5:"<<endl;
	cout << "1 Set Score:" << endl;
	cout << "2 Show High Score:" << endl;
	cout << "3 Update User:" << endl;
	cout << "4 Delete User:" << endl;
	cout << "5 To Exit:" << endl;

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
