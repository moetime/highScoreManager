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

void HighScoreManager::updateHighScore(std::string, int score)
{
	std::cout << "Hello world";

}

void HighScoreManager::printHighScore()
{
}
