#pragma once
#include <string>
#include <iostream>

class HighScoreManager
{
private:
	struct highScoreRecord {
		std::string userName;
		int score;
	}
	currentRecord;
public:
	HighScoreManager();
	~HighScoreManager();
	void createHighScore(std::string, int);
	void updateHighScore(std::string, int);
	void printHighScore();
};


