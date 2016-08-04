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
void updateUserName(string userName,string editName) {

	
	

}

//option for user to delete info
void deleteUser(string userNameParam) {
	
	
	string userNameDelete;
	string userName;
	string fName;
	string lName;
	vector<string> usersList;
	int age;
	userNameDelete = userNameParam;
	//read from the users.txt and store into vector
	fstream userFile("users.txt");
	if (userFile.is_open())
	{
		while (userFile >> userName >> fName >> lName >> age)
		{
			usersList.erase(usersList.begin(), usersList.end());

			//copy text file content into vector
			copy(istream_iterator<string>(userFile), istream_iterator<string>(), back_inserter(usersList));
			int vectorIndex = 0;


			//loop through the vector to delete the row
			for (vector<string>::const_iterator i = usersList.begin(); i != usersList.end(); i++)
			{
				vectorIndex++;// increment index
				if (userNameDelete == userName)//if match is found
				{
					usersList.erase(usersList.begin() + vectorIndex);// remove row based on index
					
				}

			}

			ofstream userFileWrite("users.txt");
			if (userFileWrite.is_open())
			{
				// write the updated vector back to users file
				ostream_iterator<string> output_interator(userFileWrite, "\n");
				copy(usersList.begin(), usersList.end(), output_interator);
				userFileWrite.close();
			}	
		}
	}
}

