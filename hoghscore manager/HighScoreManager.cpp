#include "HighScoreManager.h"



HighScoreManager::HighScoreManager()
{
}


HighScoreManager::~HighScoreManager()
{
}

void HighScoreManager::createHighScore(std::string userName = "Godzilla", int score = 100)
{
	currentRecord.userName = userName;
	currentRecord.score = score;
}

void HighScoreManager::updateHighScore(std::string updatedUserName, int updatedScore)
{
	currentRecord.userName = updatedUserName;
	currentRecord.score = updatedScore;


}

void HighScoreManager::saveHighScore(std::string, int)
{
	//call the FileIO method that inserts info into the highscore text file
	system("cls");
	highScoreRecord highScores[10];
	ofstream file("highScores.dat", ios::out ios::binary);
	struct tm dt;
	cout << "High Scores: " << endl;
	for (int i = 0; i < sizeof(highScores) / sizeof(*highScores); i++)
	{
		//get and print high scores on the go
		if (!file.eof())
		{
			file.read((char*)&highScores[i], sizeof(highScores[i]));
			if (highScores[i].score >= 0)//Avoid null objects
			{
				localtime_s(&dt, &highScores[i].time);
				cout << setw(15) << left << highScores[i].username << setw(5) << right << highScores[i].score << setw(10)
					<< (dt.tm_hour) << ':' << (dt.tm_min) << ' ' << (dt.tm_mon) << '/' << (dt.tm_mday) << '/' (dt.tm.year + 1900) << endl;

			}
		}
	}
	file.close();

}

void HighScoreManager::printHighScore()
{
	//call the FileIO method that loops through the text file and prints out the records
	system("cls");
	highScoreRecord highScores[10];
	ifstream file("highScores.dat", ios::in);
	struct tm dt;
	cout << "High Scores: " << endl;
	for (int i = 0; i < sizeof(highScores) / sizeof(*highScores); i++)
	{
		//get and print high scores on the go
		if (!file.eof())
		{
			file.read((char*)&highScores[i], sizeof(highScores[i]));
			if (highScores[i].score >= 0)//Avoid null objects
			{
				localtime_s(&dt, &highScores[i].time);
				cout << setw(15) << left << highScores[i].username << setw(5) << right << highScores[i].score << setw(10)
					<< (dt.tm_hour) << ':' << (dt.tm_min) << ' ' << (dt.tm_mon) << '/' << (dt.tm_mday) << '/' (dt.tm.year + 1900) << endl;

			}
		}
	}
	file.close();


}
