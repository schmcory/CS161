#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab {
	private:
		int xCoords;						//variable holds the x-coordinates of the taxi location
		int yCoords;						//variable holds the y-coordinates of the taxi location
		int totalDistance;					//variable holds the distance traveled by the taxi 
	public:
		Taxicab(int, int);					//constructor initializes coordinates
		Taxicab();							//default constructor sets x-coordinates, y-coordinates, and total distance to 0
		int getXCoords();					//function gets the x-coordinates of the taxi
		int getYCoords();					//function gets the y-coordinates of the taxi
		int getDistanceTraveled();			//function gets the distance traveled of the taxi
		void moveX(int);					//function determines how far the taxi should move left or right
		void moveY(int);					//function determines how far the taxi should move up or down
};
#endif
