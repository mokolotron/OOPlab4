#include <string>
#include <iostream>
#include "Date.h"
#include "Speech.h"
#include "Concert.h"





Concert::Concert()
{	

	sponsor = new std::string;
	//std::cout << "¬вед≥ть назву ф≥рми-орган≥затора" << std::endl;
	//std::cin >> *sponsor;
	//Date *date = new Date(11, 11,1111);
	
	coun_speech = 1;
	*sponsor = "firma-owner";
	speechs = new Speech[coun_speech];
}


void Concert::show()
{
	std::cout << *sponsor << ' ';
	date.show();
	for (int i = 0; i < coun_speech; i++) {
		std::cout << ' ';
		speechs[i].show();
	}

}

Concert::~Concert()
{
}
