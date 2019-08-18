#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

class Person {
	private:
		std::string name;
		int age;
	public:
		Person(std::string, int);
		std::string getName();
		int getAge();
};
#endif
