#include "Box.hpp"

		//method for setting/updating the height value
		void Box::setHeight(double h) {
			height = h;
		}

		//method for setting/updating the width value		
		void Box::setWidth(double w) {
			width = w; 
		}	

		//method for setting/updating the length value
		void Box::setLength(double l) {
			length = l;
		}	

		//default constructor
		Box::Box() {
			setHeight(1);
			setWidth(1);
			setLength(1);
		}

		//constructor with parameters							
		Box::Box(double h, double w, double l) {
			setHeight(h);
			setWidth(w);
			setLength(l);
		}		

		//function calculates the volume of the box
		double Box::calcVolume() {
			return length * width * height; 
		}

		//function calculates the surface area of the box				
		double Box::calcSurfaceArea() {
			return (2*length*width)+(2*length*height)+(2*height*width);
		}			
