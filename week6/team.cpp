#include "team.hpp"
#include <string>
#include <iostream>

	//Default constructor sets team name equal to empty
	Team::Team() {
		teamName = "";
	}

	//overloaded constructor initializes the 5 player parameters, type Player from Player class
	Team::Team(Player pg, Player sg, Player sf, Player pf, Player c) {
		pointGuard = pg;
		shootingGuard = sg;
		smallForward = sf;
		powerForward = pf;
		center = c;
	}

	std::string Team::getTeamName() {
		return teamName;
	}

	//function gets the name of the point gaurd
	Player Team::getPointGuard() {
		return pointGuard;
	}

	//function gets the name of the shooting guard
	Player Team::getShootingGuard() {
		return shootingGuard;
	}

	//function gets the name of the small forward
	Player Team::getSmallForward() {
		return smallForward;
	}

	//function gets the name of the power forward
	Player Team::getPowerForward() {
		return powerForward;
	}

	//function gets the name of the center
	Player Team::getCenter() {
		return center;
	}

	//function sets the team name
	void Team::setTeamName(std::string name) {
		teamName = name;
	}							

	//function sets the point guard player
	void Team::setPointGuard(Player pg) {
		pointGuard = pg;
	}

	//function sets the shooting guard player
	void Team::setShootingGuard(Player sg) {
		shootingGuard = sg;
	}

	//function sets the small forward player
	void Team::setSmallForward(Player sf) {
		smallForward = sf;
	}

	//function sets the power forward player
	void Team::setPowerForward(Player pf) {
		powerForward = pf;
	}

	//function sets the center player
	void Team::setCenter(Player c) {
		center = c;
	}

	//function returns the sum of the total points of each player using the getPoints() function from Player class	
	int Team::totalPoints() {
		return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
	}	
