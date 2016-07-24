#include <iostream>
#include <string>

using namespace std;

// Class
class User
{
	//Structure for the users full name
	struct userName {
		
		private:
			string	userName;
		
		public:
			//set
			void setUserName(string newUserName) {
				userName = newUserName;
			}

			//get
			string getUserName() {
				return userName;
			}
	};

	//Structure for user information (age)
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
		
	public:
		//constructor
		User(userName, userInfo) {};

	//class method prototypes
	bool login();
	bool checkUserExist();
	void updateUserList();
	void deleteUser();
};

//METHODS
//login a unique user
bool User::login() {
		
	//check if the userName is registered
	if (!userName::getUserName) {
		return false;
	}
	else {
		return true;
	}
}

//check if the user exists
bool User::checkUserExist() {
	//read from the users.txt and store the information

	//
}

//update the user list
void User::updateUserList() {
	
	//confirm the user is logged in
	if (!User::login) {




	}
	else {
		//log the user in
		User::login;
	}

}

//option for user to delete info
void User::deleteUser() {

	//confirm the user is logged in
	if (!User::login) {




	}
	else {
		//log the user in
		User::login;
	}
}

