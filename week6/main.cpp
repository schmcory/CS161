#include "player.hpp"
#include "team.hpp"
#include <iostream>

int main() {
	Player p1("Charlotte", 24, 10, 7);
 	Player p2("Emily", 21, 13, 9);
 	Player p3("Anne", 20, 10, 8);
 	Player p4("Jane", 19, 10, 10);
 	Player p5("Mary", 18, 11, 8);

	p1.setRebounds(9);
 	p2.setRebounds(5);
 	p3.setRebounds(14);
 	p4.setRebounds(3);
 	p5.setRebounds(12);

 	Team team1(p1, p2, p3, p4, p5);

  	Player p1 = team1.getShootingGuard();
 	std::cout << "Name: " << p1.getName() << std::endl;
 	std::cout << "Points: " << p1.getPoints() << std::endl;
 	std::cout << "Rebounds: " << p1.getRebounds() << std::endl;
 	std::cout << "Assists: " << p1.getAssists() << std::endl;
}
