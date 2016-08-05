#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include<algorithm>
#include<iterator>
// custom headers
#include "FileIO.h"
#include "user.h"


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
bool checkUserExist(string username) {
	//store a local User
	string userNameCheck;
	string userName;
	string fName;
	string lName;
	int age;
	//userNameCheck = username;
	//read from the users.txt and store the information
	fstream userFile("users.txt");
	while (userFile >> userName >> fName >> lName >> age)
	{
		if (username == userName) {
			return true;
		}
	}

	return false;
}

//update the user list
void updateUserInfo(string username, string editName) {
	

}

//option for user to delete info
void deleteUser(string userNameParam) {

	string userNameDelete;
	string userName;
	string fName;
	string lName;
	vector<string> usersList;
	int age;

	//read from the users.txt and store into vector
	fstream userFile("users.txt");

	while (userFile >> userName >> fName >> lName >> age)
	{
		//usersList.erase(usersList.begin(), usersList.end());

		cout << "user " << userName << "fName " << fName << "lName " << lName << "age " << age << endl;

		//copy text file content into vector
		copy(istream_iterator<string>(userFile), istream_iterator<string>(), back_inserter(usersList));

		int vectorIndex = 0;	//vecotr index iterator


								//loop through the vector to delete the row
		for (vector<string>::const_iterator i = usersList.begin(); i != usersList.end(); i++)
		{
			vectorIndex++;// increment index
			if (userNameParam == userName)//if match is found
			{
				usersList.erase(usersList.begin() + vectorIndex);// remove row based on index

			}

		}

		//ofstream userFileWrite("users.txt");
		if (userFile.is_open())
		{
			// write the updated vector back to users file
			ostream_iterator<string> output_interator(userFile, "\n");
			copy(usersList.begin(), usersList.end(), output_interator);
			userFile.close();
		}
	}
}