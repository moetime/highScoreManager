#include <iostream>
#include <string>

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
bool checkUserExist(string username) {
	//read from the users.txt and store the information

	string readFileString = "mduarte marco duarte 31 ";
	string delimiter = " ";
	string user = readFileString.substr(0, readFileString.find(delimiter)); // token is "mduarte"
	string userFName = readFileString.substr(8, readFileString.find(delimiter)); // token is "marco"
	string userLName = readFileString.substr(13, readFileString.find(delimiter)); // token is "duarte"
	string age = readFileString.substr(21, readFileString.find(delimiter)); // token is "31"	

	//for each of the strings, end at a space

	cout << "User Name " << user << endl;
	cout << "User First Name " << userFName << endl;
	cout << "User Last Name " << userLName << endl;
	cout << "User Age " << age << endl;
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
