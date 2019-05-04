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

Concert::Concert(const Concert& obj)
{
	coun_speech = obj.coun_speech;
	speechs = new Speech[obj.coun_speech];
	for (int i = 0; i < coun_speech; i++)
		speechs[i] = obj.speechs[i];
	sponsor = obj.sponsor;
	date = Date(obj.date);
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
	//delete sponsor;
}
