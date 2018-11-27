//preprocessor directives first

#include "Person.h"
#include <iostream>


//namespacing
using std::string;

Person::Person(string first, string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
	std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::Person() : arbitrarynumber(0) {
	std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::~Person() {
	std::cout << "destructing " << GetName() << std::endl;
}


std::string Person::GetName() const {
	return firstname + " " + lastname;
}