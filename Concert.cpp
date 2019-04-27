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
	std::cout << *sponsor << ' ';
	date.show();
	std::cout << ' ';
	speechs[0].show();

}

Concert::~Concert()
{
}
