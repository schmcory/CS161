#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <iostream>

class Player {
private: 
	std::string playerName;					//variable holds the player's name 
	int points;								//variable holds the points the player has
	int rebounds;							//variable holds the rebounds the player has
	int assists;							//variable holds the assists the player has
public:
	Player();								//default constructor
	Player(std::string, int, int, int);		//overloaded constructor
	std::string getName ();					//function gets the name of the player
	int getPoints();						//function gets the points each player has
	int getRebounds();						//function gets the rebounds each player has					
	int getAssists();						//function gets the assists each player has
	void setPlayerName(std::string);		//function sets the team name
	void setPoints(int);					//function sets the points each player has
	void setRebounds(int);					//function sets the rebounds each player has
	void setAssists(int);					//function sets the assists each player has
	bool hasMorePointsThan(Player);			//function tests to see who has more points
};
#endif
