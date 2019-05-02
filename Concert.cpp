#include <string>
#include <iostream>
#include "Date.h"
#include "Speech.h"
#include "Concert.h"
#include <time.h> 




Concert::Concert()
{	

	sponsor = new std::string;
	coun_speech = 1;
	*sponsor = "firma-owner";
	speechs = new Speech[coun_speech];
}



void Concert::show()
{
	std::cout << *sponsor << ' ';
	date.show();
	std::cout << std::endl;
	for (int i = 0; i < coun_speech; i++) {
		std::cout << ' ';
		speechs[i].show();
	}

}

void Concert::short_show() {
	std::cout << *sponsor << ' '; date.show();
}


Concert::~Concert()
{
}
