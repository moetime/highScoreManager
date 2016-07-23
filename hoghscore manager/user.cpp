#include <iostream>
#include <string>

using namespace std;

// Class
class User
{
	//Structure for the users full name
	struct UserName {
		
		private:
			string	firstName, 
					lastName;
		
		//set the first & last names for the user
		public:

			void setFirstName(string newFirstName) {
				firstName = newFirstName;
			};

			void setLastName(string newLastName) {
				lastName = newLastName;
			};

			string getFullName() {
				return firstName + " " + lastName;
			}
	};

	//Structure for user information (age)
	struct UserInfo {
		private:
			int age, 
				highscore;

		//set the age for the user
		public:

			void setAge(int newAge) {
				age = newAge;
			};

			int getAge() {
				return age;
			};

			void setHighscore(int newHighScore) {
				highscore = newHighScore;
			};

			int getHighScore() {
				return highscore;
			}
	};		
		
	public:
		//constructor
		User(UserName, UserInfo) {};

	//prototypes
	bool login();
	bool checkUserExist();
	void updateUserList();
	void deleteUser();
};

bool User::login() {

}

bool User::checkUserExist() {

}

void User::updateUserList() {

}

void User::deleteUser() {

}

