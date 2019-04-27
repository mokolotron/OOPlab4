#include <string>
#include <iostream>
#include "Date.h"
#include "Speech.h"
#include "Concert.h"





Concert::Concert()
{	

	sponsor = new std::string;
	std::cout << "¬вед≥ть назву ф≥рми-орган≥затора" << std::endl;

	std::cin >> *sponsor;

	
	speechs = new Speech[1];
	
}


void Concert::show()
{
	std::cout << *sponsor << std::endl;
	date.show();
	std::cout<< std::endl;
	speechs[0].show();

}

Concert::~Concert()
{
}
