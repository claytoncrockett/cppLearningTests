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

bool Person::operator<(Person const& p) const
{
	return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const
{
	return arbitrarynumber < i;
}

bool operator<(int i, Person const& p)
{
	return i < p.GetNumber();
}


std::string Person::GetName() const {
	return firstname + " " + lastname;
}