#include <iostream>
#include <string>

// custom headers
#include "FileIO.h"
#include "user.h"

using namespace std;

// Class
class User
{
	//Structure for the users full name
	struct userName {
		
		private:
			string user;
		
		public:
			//set
			void setUserName(string newUserName) {
				user = newUserName;
			}

			//get
			string getUserName() {
				return user;
			}
	};

	//Structure for user information
	struct userInfo {
		private:
			string	firstName,
					lastName;
			int age, 
				highscore;

		//set the age, first & last names for the user
		public:
			//set
			void setFirstName(string newFirstName) {
				firstName = newFirstName;	//firstName
			};

			void setLastName(string newLastName) {
				lastName = newLastName;		//lastName
			};

			void setAge(int newAge) {		//age
				age = newAge;
			};

			void setHighscore(int newHighScore) {
				highscore = newHighScore;	//highscore
			};

			//get
			string getFullName() {			//fullname
				return firstName + " " + lastName;
			}

			int getAge() {					//age
				return age;
			};

			int getHighScore() {			//highscore
				return highscore;
			}

	};		
		
	//constructor
	User(userName newUser, userInfo newInfo) {};
};

//METHODS
//login a unique user
bool login(string *up) {
	
	//check if the user exists
	checkUserExist(*up);

	//check if the userName is registered
	if (!checkUserExist(*up)) {

		cout << "You've failed to login!" << endl;

		return false;
	}
	else {

		cout << "You've successfully logged in!" << endl;
		return true;
	}
}

//check if the user exists
bool checkUserExist(string *up) {
	//read from the users.txt and store the information
	string readUserName = readUserFile();
	
	//for each of the strings, end at a space

		
}

//update the user list
void updateUserList(string *up) {
	
	//confirm the user is logged in
	if () {




	}
	else {
		//log the user in
		login(up);
	}

}

//option for user to delete info
void deleteUser(string *up) {

	//confirm the user is logged in
	if () {




	}
	else {
		//log the user in
		login;
	}
}

