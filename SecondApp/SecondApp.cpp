// SecondApp.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"



int main()
{
	Person p1("Clayton", "Crockett", 123);
	//arbitrary brackets, create new lexical scope
	{
		Tweeter t1("Someone", "Else", 456, "@whoever");
		std::string name2 = t1.getName();
	}

	std::cout << "after innermost block" << std::endl;
	std::string name = p1.getName();

	//int i = p1.arbitrarynumber; -- should throw error cause encapsulation 

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;
	
    return 0;
}

