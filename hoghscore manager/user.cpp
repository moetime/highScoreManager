#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include<algorithm>
#include<iterator>

// custom headers
#include "FileIO.h"
#include "user.h"

using namespace std;	




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
bool checkUserExist(string username) {
	//store a local User
	string userNameCheck;
	string userID;
	string fName;
	string lName;
	int age;
	userNameCheck = username;
	//read from the users.txt and store the information
	ifstream userFile("users.txt");
	while (userFile >> userID >> fName >> lName >> age)
	{
		if (userNameCheck == userID) {
			return true;

		}
	}
	
	//for each of the strings, end at a space

	/*cout << "User Name " << user << endl;
	cout << "User First Name " << userFName << endl;
	cout << "User Last Name " << userLName << endl;
	cout << "User Age " << age << endl;*/
	return false;
}

//update the user list
void updateUserList() {
	
	//confirm the user is logged in
	//if () {




	//}
	//else {
		//log the user in
		//login();
	//}

}

//option for user to delete info
void deleteUser(string userName) {
	
	
	string userNameDelete;
	string userID;
	string fName;
	string lName;
	vector<string> usersList;
	int age;
	userNameDelete = userName;
	//read from the users.txt and store into vector
	ifstream userFile("users.txt");
	if (userFile.is_open())
	{
		while (userFile >> userID >> fName >> lName >> age)
		{
			if (userNameDelete == userID) {
				copy(istream_iterator<string>(userFile), istream_iterator<string>(), back_inserter(usersList));

				ofstream userFileWrite("users.txt");
				if (userFileWrite.is_open())
				{
					for (vector<string>::const_iterator i=usersList.begin(); i!=usersList.end(); ++i)
					{
						userFileWrite << *i <<endl;
					}
					userFileWrite.close();
				}
				

			}
		}

	}
	


	
}

