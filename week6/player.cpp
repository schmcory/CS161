#include "player.hpp"
#include <string>
#include <iostream>

	/*
	Default constructor
		sets player name equal to empty
		sets points to -1, so the player has none
		sets rebounds to - 1, so the player has none
		sets assists to -1, so the player has none
	*/
	Player::Player() {
		playerName = "";
		points = -1;
		rebounds = -1;
		assists = -1;
	}

	/*
	Overloaded constructor
		initializes playerName, points, rebounds, and assists variables
	*/
	Player::Player(std::string n, int p, int r, int a) {
		playerName = n;
		points = p;
		rebounds = r;
		assists = a;
	}

	//returns the name of the player
	std::string Player::getName () {
		return playerName;
	}

	//returns the points each player has
	int Player::getPoints() {
		return points;
	}

	//returns the rebounds each player has
	int Player::getRebounds() {
		return rebounds;
	}

	//returns the assists each player has
	int Player::getAssists() {
		return assists;
	}

	//function sets the team name
	void Player::setPlayerName(std::string name) {
		playerName = name;
	}		

	//sets the points each player has
	void Player::setPoints(int p) {
		points = p;
	}

	//sets the rebounds each player has
	void Player::setRebounds(int r) {
		rebounds = r;
	}

	//sets the assists each player has
	void Player::setAssists(int a) {
		assists = a;
	}

	/*
		Tests if the player executing the function has more points
		than the player being passed as a parameter
	*/
	bool Player::hasMorePointsThan(Player player1) {
		Player player2;

		if(player2.points > player1.points) {
			return true;
		}

		else {
			return false;
		}
	}
