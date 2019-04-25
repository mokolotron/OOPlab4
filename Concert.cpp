#include <string>
#include <iostream>
#include "Date.h"
#include "Speech.h"
#include "Concert.h"





Concert::Concert()
{
	sponsor = new std::string;
	Date date();
	
}


void Concert::show()
{
	std::cout << sponsor << std::endl;
	date.show();
	std::cout<< std::endl;
	speechs[0].show();

}

Concert::~Concert()
{
}
