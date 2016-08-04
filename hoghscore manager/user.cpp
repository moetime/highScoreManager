#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

// custom headers
#include "FileIO.h"
#include "user.h"


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
void login(string newLogin) {

	//check if the userName is registered
	if (!checkUserExist(newLogin)) {

		cout << "You've failed to login!" << endl;

		//return false;
	}
	else {

		cout << "You've successfully logged in!" << endl;
		//return true;
	}
}

//check if the user exists
//bool checkUserExists(std::string username) {
//	//loop through the file
//	//if the line that we read's username == username
//	//return true
//	//done loop
//	ifstream userFileRead("users.txt");
//
//	//read file if it exists
//	if (userFileRead.is_open())
//	{
//		//temp variables to store a temp user
//		User  tempUser;
//		string tempString, tempUName, tempFname, tempLname;
//		int tempAge;
//		string ;
//
//		while (!userFileRead.eof())
//		{
//			getline(userFileRead, tempString);
//			if (tempString.find(username) < tempString.length())
//			{
//				cout << "User name exists." << endl;
//
//				return true;
//			}
//
//		}
//
//		return false;
//	}
//	else
//	{
//		cout << "unable to open file";
//	}
//	return false;
//}

//update the user list
void updateUserInfo(string username) {
	

}

//option for user to delete info
void deleteUser() {

	
}