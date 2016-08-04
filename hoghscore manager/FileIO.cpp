#include <iostream>
#include <fstream>
#include <string>

// custom headers
#include "FileIO.h"

using namespace std;


void readFileHighScore()
{
	ifstream highScoreRead("highscore.txt");
	if (highScoreRead.is_open())
	{
		
		string userName;
		int score;
		while (highScoreRead >> userName >> score)
		{
			cout << userName<<" "<<score << endl;
		}
		highScoreRead.close();

	}
	else
	{
		cout << "unable to open file";
	}




}

void writeFileHighScore(string userName, int highScore)
{
	ofstream highScoreWrite("highscore.txt", std::ios_base::app);
	if (highScoreWrite.is_open())
	{

		highScoreWrite << userName <<" "<< highScore;
		highScoreWrite.close();


	}
	else
	{
		cout << "enable to open from file";
	}


}

void writeUserFile(string userName, string fullName, int age) //passing user info by calling the methods on user.cpp
{
	//local values 
	string  newUserName, newFullName;
	int newAge;
	newUserName = userName;
	newFullName = fullName;
	newAge = age;

	ofstream userFileWrite("users.txt",std::ios_base::app);
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
