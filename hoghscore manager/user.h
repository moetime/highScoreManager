#pragma once
#include <string>
using namespace std;

// Class
class User
{
private:
	string	username;
	string	firstName;
	string	lastName;
	int		age;

	//set the age, first & last names for the user
	public:
		//set
		void setUserName(string newUserName) {
			username = newUserName;		//username
		}
		void setFirstName(string newFirstName) {
			firstName = newFirstName;	//firstName
		};

		void setLastName(string newLastName) {
			lastName = newLastName;		//lastName
		};

		void setAge(int newAge) {					//age
			age = newAge;
		};

		//get
		string getFullName() {						//fullname
			return firstName +
				" " + lastName;
		}

		int getAge() {								//age
			return age;
		};

		string getUserName() {
			return username;
		}

		User();
		User(string, string, string, int);
		~User();
			
};

//class method prototypes
bool login(string);
bool checkUserExist(string);
void updateUserInfo(string, string);
void deleteUser(string);

