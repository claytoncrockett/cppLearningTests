// SecondApp.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
//#include "Person.h"
#include "Tweeter.h"
#include "status.h"


template <class T>
T max(T const& t1, T const& t2)
{
	return t1 < t2 ? t2 : t1;
}


int main()
{
	Person p1("Clayton", "Crockett", 123);
	//arbitrary brackets, create new lexical scope
	{
		Tweeter t1("Someone", "Else", 456, "@whoever");
		std::string name2 = t1.GetName();
	}
	Person p2("Not Clayton", " ", 200);


	std::cout << "max of 33 and 44 is " << max(33, 44) << std::endl;
	std::cout << "after innermost block" << std::endl;
	std::cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << std::endl;
	std::string s1 = "hello";
	std::string s2 = "world";
	std::string s3 = "testing";
	std::cout << "" << std::endl;
	std::cout << "max of " << s1 << " and " << s2 << " is " << max(s1, s2) << std::endl;
	std::cout << "max of " << p1.GetName() << " and " << p2.GetName() << " is " << max(p1, p2).GetName() << std::endl;

 




	//int i = p1.arbitrarynumber; -- should throw error cause encapsulation 

	Status s = Pending;
	s = Approved;

	FileError fe = FileError::notfound;
	fe = FileError::ok;
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;
	
    return 0;
}

