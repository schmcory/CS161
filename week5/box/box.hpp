#ifndef BOX_HPP
#define BOX_HPP

class Box {
	private:
		double height;			//variable holds the height of the box
		double width;			//variable holds the width of the box
		double length;			//variable holds the length of the box

	public:
		void setHeight(double);		//method for setting/updating the height value
		void setWidth(double);		//method for setting/updating the width value
		void setLength(double);		//method for setting/updating the length value

		Box();								//default constructor
		Box(double, double, double); 		//constructor with parameters

		double calcVolume();				//function calculates the volume of the box
		double calcSurfaceArea();			//function calculates the surface area of the box

};
#endif
