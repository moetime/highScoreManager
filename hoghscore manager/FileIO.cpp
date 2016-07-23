#include<iostream>
#include<fstream>

using namespace std;
int readFileHighScore()
{
	ofstream highScoreRead;
	highScoreRead.open("highscore.txt");
	highScoreRead.close();
	

}

int writeFileHighScore()
{
	ofstream highScoreWrite;
	highScoreWrite.open("highscore.txt");
	highScoreWrite << "1. 10000";
	highScoreWrite << "2. 9000";
	highScoreWrite << "3. 8000";
	highScoreWrite << "4. 7000";
	highScoreWrite << "5. 6000";
	highScoreWrite << "6. 5000";
	highScoreWrite << "7. 4000";
	highScoreWrite << "8. 3000";
	highScoreWrite << "9. 2000";
	highScoreWrite << "10.1000";
	highScoreWrite.close();
	
}

int writeUserFile()
{
	ofstream userFileWrite;
	userFileWrite.open("users.txt");
	userFileWrite << "Test User";
}
