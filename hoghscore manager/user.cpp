#include <iostream>
#include <string>

// custom headers
#include "FileIO.h"
#include "user.h"

using namespace std;	

//CONSTRUCTORS
User::User()
{ }

User::User(User::userInfo) {

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
	//read from the users.txt and store the information
	
	
	//for each of the strings, end at a space

	/*cout << "User Name " << user << endl;
	cout << "User First Name " << userFName << endl;
	cout << "User Last Name " << userLName << endl;
	cout << "User Age " << age << endl;*/
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

