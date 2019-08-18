#ifndef TEAM_HPP
#define TEAM_HPP

#include "player.hpp"
#include <string>
#include <iostream>

class Team {
private: 
	std::string teamName;							//variable holds the name of the team

	//variables for the type of Players on the team, from player.hpp class
	Player pointGuard, shootingGuard, smallForward, powerForward, center;		
public:
	Team();											//default constructor
	Team(Player, Player, Player, Player, Player);	//overloaded constructor takes 5 player parameters
	std::string getTeamName();						//function gets the team name
	Player getPointGuard();							//function gets the name of the point gaurd
	Player getShootingGuard();						//function gets the name of the shooting guard
	Player getSmallForward();						//function gets the name of the small forward
	Player getPowerForward();						//function gets the name of the power forward
	Player getCenter();								//function gets the name of the center
	void setTeamName(std::string);					//function sets the team name
	void setPointGuard(Player);						//function sets the point guard player
	void setShootingGuard(Player);					//function sets the shooting guard player
	void setSmallForward(Player);					//function sets the small forward player
	void setPowerForward(Player);					//function sets the power forward player
	void setCenter(Player);							//function sets the center player
	int totalPoints();								//function returns the sum of the total points of each player			
};
#endif
