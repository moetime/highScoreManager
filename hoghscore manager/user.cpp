#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

// custom headers
#include "FileIO.h"
#include "user.h"

using namespace std;

// Class
class User
{
	//Structure for user information
	private:
		struct userInfo {
			string	username,
					firstName,
					lastName;
			int		age;
		};

		userInfo currentUser;
			
	//set the age, first & last names for the user
	public:
		//set
		void setUserName(string newUserName) {
			currentUser.username = newUserName;
		}
		void setFirstName(string newFirstName) {
			currentUser.firstName = newFirstName;	//firstName
		};

		void setLastName(string newLastName) {
			currentUser.lastName = newLastName;		//lastName
		};

		void setAge(int newAge) {		//age
			currentUser.age = newAge;
		};

		//void setHighscore(int newHighScore) {
		//	currentUser.highscore = newHighScore;	//highscore
		//};

		//get
		string getFullName() {			//fullname
			return currentUser.firstName + " " + currentUser.lastName;
		}

		int getAge() {					//age
			return currentUser.age;
		};

		//int getHighScore() {			//highscore
		//	return highscore;
		//}
		string getUserName() {
			return currentUser.username;
		}

		//constructor
		//User() {};
};		
	

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
	
	//confirm the user is logged in
	//if () {




	//}
	//else {
		//log the user in
		//login();
	//}

}

//option for user to delete info
void deleteUser() {

	//confirm the user is logged in
	//if () {




	//}
	//else {
		//log the user in
		//login;
	//}
}

