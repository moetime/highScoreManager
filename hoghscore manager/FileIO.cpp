#include <iostream>
#include <fstream>
#include <string>

// custom headers
#include "user.h"
#include "FileIO.h"
#include "user.cpp"

using namespace std;


void readFileHighScore()
{
	ifstream highScoreRead("highscore.txt");
	if (highScoreRead.is_open())
	{

		string fileContent;
		while (highScoreRead >> fileContent)
		{
			cout << fileContent << endl;
		}
		highScoreRead.close();

	}
	else
	{
		cout << "unable to open file";
	}




}

void writeFileHighScore()
{
	ofstream highScoreWrite("highscore.txt");
	if (highScoreWrite.is_open())
	{

		highScoreWrite << "1. 10000\n";
		highScoreWrite << "2. 9000\n";
		highScoreWrite << "3. 8000\n";
		highScoreWrite << "4. 7000\n";
		highScoreWrite << "5. 6000\n";
		highScoreWrite << "6. 5000\n";
		highScoreWrite << "7. 4000\n";
		highScoreWrite << "8. 3000\n";
		highScoreWrite << "9. 2000\n";
		highScoreWrite << "10.1000\n";
		highScoreWrite.close();


	}
	else
	{
		cout << "enable to open from file";
	}


}
bool checkUserExists(string username) {
	//loop through the file
	//if the line that we read's username == username
	//return true

	//done loop
	//return false
	return false;
}
void writeUserFile(string userName, string fullName, int age) //passing user info by calling the methods on user.cpp
{
	//local values 
	string  newUserName, newFullName;
	int newAge;
	newUserName = userName;
	newFullName = fullName;
	newAge = age;

	ofstream userFileWrite("users.txt");
	if (userFileWrite.is_open())
	{
		//write the user name and full name and age into the text file
		userFileWrite << newUserName << " " << newFullName << " " << newAge << endl;
	}
	else
	{
		cout << "unable to open file";
	}
}

//read from file and return a string
void readUserFile()
{
	std::ifstream userFileRead("users.txt");
	string fileLine;
	if (userFileRead.is_open())
	{	
		User tempUser;
		
		while (std::getline(userFileRead, fileLine))
		{
			cout << fileLine <<endl;

		}
		userFileRead.close();

	}
	else
	{
		cout << "unable to open file";
	}
}
