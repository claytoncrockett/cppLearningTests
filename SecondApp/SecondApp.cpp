// SecondApp.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Person.h"



int main()
{
	Person p1("Clayton", "Crockett", 123);
	Person p2;
	std::string name = p1.getName();

	//int i = p1.arbitrarynumber; -- should throw error cause encapsulation 
	
    return 0;
}

