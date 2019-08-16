#include iostream
#include <string>

int main () {

		//this variable, string type, holds the value the user prints to the console
		string faveAnimal;	

		//statement prints a question to the console
		std::cout << "What is your favorite animal?" << std::endl;

		//prompt for user to enter a string value to the console
		std::cin >> faveAnimal;

		//statement prints the users favorite animal
		std::cout << "Your favorite animal is the " << faveAnimal;

		//statements ends the sentence with a period
		std::cout << "." << std::endl;

		//terminate the main function
		return 0;
}
