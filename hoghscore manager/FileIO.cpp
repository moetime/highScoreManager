#include <iostream>
#include <fstream>
#include <string>

// custom headers
#include "user.h"
#include "FileIO.h"

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

void writeUserFile()
{
	ofstream userFileWrite("users.txt");
	if (userFileWrite.is_open())
	{
		
		userFileWrite << "nsiu" << endl;
		userFileWrite << "iavery" << endl;
		userFileWrite << "mduarte" << endl;
		userFileWrite << "morrice" << endl;
		userFileWrite << "d0ng" << endl;
		userFileWrite << "p00p" << endl;
		userFileWrite << "hello" << endl;
		userFileWrite << "poop101" << endl;
		userFileWrite << "butts" << endl;
		userFileWrite << "mikehawk" << endl;
	}
	else
	{
		cout << "unable to open file";
	}
}

//read from file and return a string
string readUserFile()
{
	ifstream userFileRead("users.txt");
	if (userFileRead.is_open())
	{

		string fileContent;
		while (userFileRead >> fileContent)
		{
			return fileContent;
		}
		userFileRead.close();

	}
	else
	{
		cout << "unable to open file";
	}
	return false;
}