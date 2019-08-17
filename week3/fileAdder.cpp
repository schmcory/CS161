#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() {
	std::ifstream inFile;			//ifstream variable holds the input file
	std::ofstream outFile;			//ofstream variable holds the output file

	int line;	//line variable holds the numbers from the the input file
	int sum;	//sum variable holds the sum of the numbers from the file

	std::string file;	//file variable holds the name of the input file from the user

	//while the file is not open, prompt the user to enter the name of the file they wish to open
    while(!inFile.is_open()) {
        std::cout << "Please enter your filename." << std::endl;
        std::cin >> file;
        file.append(".txt");	//appends .txt to the end of the file name
        inFile.open(file.c_str());	//opens the file

        //if the is not open, print an error message
        if(!inFile.is_open()) {
        	std::cout << "Could not access file." << std::endl; 	
        }
    }

    //while the file has not read all lines
    while(!inFile.eof()) {
    	  inFile >> line;
    	  //for testing purposes only
    	  //std::cout << line << std::endl;
    	  sum += line; //sum the numbers from the file
    }

    //create output file
    outFile.open("sum.txt");

    //add the sum to the output file
    outFile << sum << std::endl;

    //close the file streams
    inFile.close();
    outFile.close();

    //terminate main()
	return 0;
}
