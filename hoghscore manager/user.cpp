#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include<algorithm>
#include<iterator>
// custom headers
#include "FileIO.h"
#include "user.h"

// holds the index of the username
int usernameIndex = -1;

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
	int indexCounter = 0;
	while (userFile >> userName >> fName >> lName >> age)
	{
		if (username == userName) {
			usernameIndex = (indexCounter * 4);
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

	cout << "deleting user: " << usernameIndex << endl;


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
		if (userName == userNameParam)
		{

			// load file into usersList
			std::string word;
			std::vector<std::string> file;

			std::ifstream in("users.txt");

			while (in >> word)
				usersList.push_back(word);

			in.close();

			// remove unwanted user
			for (int i = usernameIndex + 3; i >= usernameIndex; i--) {
				usersList.erase(usersList.begin() + i);
			}

			// list test confirm user has been removed
			/*int counter2 = 0;
			for (auto i = usersList.begin(); i < usersList.end(); i++) {
				cout << "U: " << usersList[counter2] << endl;
				counter2++;
			}*/

			// convert vector to a string
			string contents;
			int convertCounter = 0;
			for (auto i = usersList.begin(); i < usersList.end(); i++) {

				contents += usersList[convertCounter] + '\n';

				convertCounter++;
			}

			// write the string to the file
			std::ofstream fs;
			fs.open("users.txt");
			fs << contents;
			fs.close();

		}
	}
}