#include "taxicab.hpp"
#include <math.h>
#include <cstdlib>

		int xCoords;
		int yCoords;
		int totalDistance;

		//constructor initializes coordinates
		Taxicab::Taxicab(int x, int y) {
			xCoords = x;
			yCoords = y;
			totalDistance = 0;
		}

		//default constructor sets x-coordinates, y-coordinates, and total distance to 0
		Taxicab::Taxicab() {
			xCoords = 0;
			yCoords = 0;
			totalDistance = 0;
		}

		//function gets the x-coordinates of the taxi
		int Taxicab::getXCoords() {
			return xCoords; 
		}

		//function gets the y-coordinates of the taxi
		int Taxicab::getYCoords() {
			return yCoords;
		}

		//function gets the distance traveled of the taxi
		int Taxicab::getDistanceTraveled() {
			return totalDistance;
		}

		//function determines how far the taxi should move left or right
		void Taxicab::moveX(int x) {
			totalDistance += abs(x);			//0 + 3 = 3		0 + 1 = 1 (from main)			
			xCoords += x; 						//0 + 3 = 3		5 + (- 1) = 4 (from man)
		}

		//function determines how far the taxi should move up or down
		void Taxicab::moveY(int y) {
			totalDistance += abs(y);		//3 + 1 = 4			1 + 7 = 8			(from main)
			yCoords += y; 					//0 + (-1) = -1		-8 + (7) = -1		(from main)
		}
