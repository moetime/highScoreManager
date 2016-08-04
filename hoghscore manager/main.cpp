#include <iostream>
#include <stdlib.h>
#include <string>

//custom header
#include "FileIO.h"
#include "user.h"

using namespace std;

int ShowMenu();
void ControlSubMenu();
void mainMenu();
int ShowSubMenu();
string userName;
string newUserName;
string fName;
string lName;
string fullName;
string editName;
int age;
int choice = 1;
int highScore;

int main()
{
	
	
	// end if user picks 4 or with invalid entry, continue program otherwise
	cout << "Enter your username:";
	cin >> userName;
	login(userName);

	if(checkUserExist(userName))
	{
		mainMenu();
	}
	else
	{
		cout << "no user exists, create a new user by entering the following information" << endl;
		cout << "Enter your desired username:" <<endl;
		cin >> newUserName;
		cout << "Enter your first name:" << endl;
		cin >> fName;
		cout << "Enter your last name" << endl;
		cin >> lName;
		cout << "Enter your age" << endl;
		cin >> age;
		fullName = fName + " " + lName;

		writeUserFile(newUserName,fullName,age);
		cout << "Please log in with your new user name" << endl;

		cin >> userName;
		login(userName);

		if (checkUserExist(userName))
		{
			mainMenu();
		}
		else
		{
			do
			{
				cout << "Incorrect username please enter it again:" << endl;
				cin >> userName;
			}while(!checkUserExist(userName));
			mainMenu();
		}
		cin.get();
		cin.get();
	}
	
} // end of main

int ShowMenu()
{
	int choice;
	system("cls");
	cout << "  	M E N U\n";
	cout << "= = = = = = = =\n";
	cout << "  1  Set score:\n";
	cout << "  2  Show High Score:\n";
	cout << "  3  Update User:\n";
	cout << "  4  Delete User:.\n";
	cout << "  5  End program: \n";
	cout << "\nEnter your choice: ";
	while (!(cin >> choice))
	{
		cout << "\nAre you drunk? that's invalid option."
			<< "\nRe-Enter your choice: ";
		cin.get();
		cin.get();
		cin.clear();
		fflush(stdin);
	}
	return choice;

} // end function ShowMenu


void ControlSubMenu() {
	int choice = 1;

	// end if user picks 4 or with invalid entry, continue program otherwise
	while (choice != 4)
	{
		do {
			if (choice > 4 || choice <= 0)
			{
				cout << "\We don't have that option. Please select again. \n";
				cout << "\nPress <Enter> key to continue ... ";
				fflush(stdin);
				cin.get();
				cin.get();
			}

			choice = ShowSubMenu();

		} while (choice < 0 || choice > 4);


		if (choice != 4)
			switch (choice)  // branch to an appropriate selection
			{
			case 1:
				cout << "\nOption #1 was selected. \n";
				cout << "please enter desired first name" << endl;
				cin >> editName;
				updateUserInfo(userName,editName);
				cout << "\nPress <Enter> key to continue ... ";
				//fflush(stdin);
				cin.get();
				cin.get();
				break;
			case 2:
				cout << "\nOption #2 was selected. \n";
				cout << "\nPress <Enter> key to continue ... ";
				fflush(stdin);
				cin.get();
				cin.get();
				break;

			case 3:
				cout << "\nOption #3 was selected. \n";
				cout << "\nPress <Enter> key to continue ... ";
				fflush(stdin);
				cin.get();
				cin.get();
				break;

			}
		else //choice 4 was selected
		{
			cout << "\nSubMenu is over. Thanks for using.\n";
		}


	} // end of while 

}



int ShowSubMenu() {
	int choice;
	system("cls");
	cout << "  	User Profile\n";
	cout << " = =  = = = = = = =\n";
	cout << "  1  Edit first name.\n";
	cout << "  2  Edit last name.\n";
	cout << "  3  Edit age.\n";


	cout << "  4  Back to main menu.\n";
	cout << "\nEnter your choice: ";
	while (!(cin >> choice))
	{
		cout << "\nAre you drunk? that's invalid option."
			<< "\nRe-Enter your choice: ";
		cin.clear();
		fflush(stdin);
	}
	return choice;
}
void mainMenu()
{
	while (choice != 5)
	{
		do {
			if (choice > 5 || choice <= 0)
			{
				cout << "\We don't have that option. Please select again. \n";
				cout << "\nPress <Enter> key to continue ... ";
				fflush(stdin);
				cin.get();
				cin.get();
			}

			choice = ShowMenu();

		} while (choice < 0 || choice > 5);


		if (choice != 5)
			switch (choice)  // branch to an appropriate selection
			{
			case 1:
				cout << "\nOption #1 was selected. Set the high score. \n";
				cout << "Enter your highscore:" << endl;
				cin >> highScore;
				writeFileHighScore(userName, highScore);
				cout << "\nPress <Enter> key to continue ... ";
				//fflush(stdin);
				cin.get();
				cin.get();
				break;
			case 2:
				cout << "\nOption #2 was selected. Show the high score. \n";
				readFileHighScore();
				cout << "\nPress <Enter> key to continue ... ";
				fflush(stdin);
				cin.get();
				cin.get();
				break;

			case 3:
				cout << "\nOption #3 was selected. Update user.\n";
				cout << "\nPress <Enter> key to continue ... ";
				fflush(stdin);
				cin.get();
				cin.get();
				ControlSubMenu();
				break;
			case 4:
				cout << "\nOption #4 was selected. Delete user. \n";
				deleteUser(userName);
				cout << "\nPress <Enter> key to continue ... ";
				fflush(stdin);
				cin.get();
				cin.get();
				break;

			}
		else //choice 9 was selected
		{
			cout << "\nprogram is over. Thanks for using.\n";
			cout << "\nPress <Enter> key to end the program. ";
		}


	} // end of while 
	fflush(stdin);
	cin.get();
	
}

