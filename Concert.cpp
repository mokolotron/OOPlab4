#include <string>
#include <iostream>
#include "Date.h"
#include "Concert.h"

Concert::Concert()
{	
	sponsor = new std::string;
	coun_speech = 1;
	*sponsor = "firma-owner";
	speechs = new Speech[coun_speech]();
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
	for (int i = 0; i < coun_speech-1 ; i++) {
		std::cout << ' ';
		speechs[i].show();
	}

}


void Concert::short_show() {
	std::cout << *sponsor << ' '; date.show();
}

void Concert::addspeech() {
	
	speechs = addsize(speechs, coun_speech, coun_speech + 1);
	speechs[coun_speech - 1].filldata();
	coun_speech += 1;
}

Concert::~Concert()
{
	//delete sponsor;
}



Speech* Concert::addsize(Speech* old_arr, int old_size, int new_size)
{
	{
		Speech* new_arr = new Speech[new_size];
		for (int i = 0; i < old_size; i++)
			new_arr[i] = old_arr[i];
		delete[] old_arr;
		return new_arr;
	}
}

void Concert::filldata()
{
	using namespace std;
	cout << "Введіть назву фірми-організатора : ";
	cin >> *sponsor;
	date.filldata();

	int input;
	while (true) {
		cout << endl << "Щоб довати ще один виступ введыть \' 1 \' , щоб вийти введіть 0" << endl;
		cin >> input;
		
		if (input == 0) break;
		else if (input != 1) {
			cout << "Невірно введено" << endl;
			continue;
		}
		speechs = addsize(speechs, coun_speech , coun_speech+1);
		speechs[coun_speech - 1].filldata();
		coun_speech += 1;
	}




}

