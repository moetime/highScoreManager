#pragma once

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
			currentUser.username = newUserName;		//username
		}
		void setFirstName(string newFirstName) {
			currentUser.firstName = newFirstName;	//firstName
		};

		void setLastName(string newLastName) {
			currentUser.lastName = newLastName;		//lastName
		};

		void setAge(int newAge) {					//age
			currentUser.age = newAge;
		};

		//get
		string getFullName() {						//fullname
			return currentUser.firstName +
				" " + currentUser.lastName;
		}

		int getAge() {								//age
			return currentUser.age;
		};

		string getUserName() {
			return currentUser.username;
		}

		User();
		User(string, string, string, int);
		~User();
			
};
//class method prototypes
void login(std::string);
bool checkUserExist(std::string);
void updateUserList();
void deleteUser();
