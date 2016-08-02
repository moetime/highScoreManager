#include <iostream>
#include <string>

// custom headers
#include "FileIO.h"
#include "user.h"

using namespace std;	

//CONSTRUCTORS
User::User()
{ }

User::User(string username, string firstName, string lastName, int age) {
	
	setUserName(username);
	setFirstName(firstName);
	setLastName(lastName);
	setAge(age);
}

//DECONSTRUCTOR
User::~User() 
{ }

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
	
	return false;
}

//update the user list
void updateUserList() {
	
	
}

//option for user to delete info
void deleteUser() {

	
}

