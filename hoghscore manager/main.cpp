#include <iostream>
using namespace std;

int ShowMenu();
void ControlSubMenu();
int ShowSubMenu();


int main()
{
	int choice = 1;

	// end if user picks 4 or with invalid entry, continue program otherwise
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
				cout << "\nPress <Enter> key to continue ... ";
				//fflush(stdin);
				cin.get();
				cin.get();
				break;
			case 2:
				cout << "\nOption #2 was selected. Show the high score. \n";
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
	return 0;
} // end of main

int ShowMenu()
{
	int choice;
	system("cls");
	cout << "  	M E N U\n";
	cout << "  	= = = = = = = =\n";
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
