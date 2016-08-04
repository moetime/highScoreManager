#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

// custom headers
#include "FileIO.h"
#include "user.h"

using namespace std;

//CONSTRUCTORS
User::User()
{ }

User::User(string username, string firstName, string lastName, int age) {

	setUserName(username);
	setFirstName(firstName);
	setLastName(lastName);
	setAge(age);
}

//DECONSTRUCTOR
User::~User()
{ }

//METHODS
//login a unique user
bool login(string newLogin) {

	//check if the userName is registered
	if (!checkUserExist(newLogin)) {

		cout << "You've failed to login!" << endl;

		return false;
	}
	else {

		cout << "You've successfully logged in!" << endl;
		return true;
	}
}

//check if the user exists
bool checkUserExists(string username) {
	//loop through the file
	//if the line that we read's username == username
	//return true
	//done loop
	ifstream userFileRead("users.txt");
	if (userFileRead.is_open())
	{
		string tempString;

		while (!userFileRead.eof())
		{
			getline(userFileRead, tempString);
			if (tempString.find(username) < tempString.length())
			{
				return true;
			}

		}
		//return false
		return false;
	}
	else
	{
		cout << "unable to open file";
	}
	return false;
}

//update the user list
void updateUserList() {
	

}

//option for user to delete info
void deleteUser() {

	
}

