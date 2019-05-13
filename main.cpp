#include "Performer.h"
#include "Date.h"
#include "Speech.h"
#include "Concert.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int input = 1;
	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	Concert concert;

	cout <<"Цей обєкт створений конструктором по замовчуванню: "<<endl;
	concert.show();
	cout << endl << endl;

	Concert* tconcert = new Concert();
	tconcert->filldata();
	Concert concert2(tconcert->get_sponsor(), tconcert->get_date(), tconcert->get_coun(), tconcert->get_speeechs());
	delete tconcert;
	concert2.show();
	cout << endl;
	cout << "Коротка форма" << endl;
	concert2.short_show();
	
	cout <<endl<< endl << "Це дані що містятся у третьому обєкті типу концерт" << endl
		<< "Він створений конструктором копіювання" << endl;
	Concert concert3(concert2);
	cout << "Коротка форма" << endl;
	concert3.show();
	cout << endl;
	concert3.short_show();

	while (true) {
		cout<<endl << "Щоб довати ще один виступ до третього обєкта введыть \' 1 \' , щоб вийти введіть 0" << endl;
		cin >> input;
		if (input == 0) break;
		else if (input != 1) {
			cout << "Невірно введено" << endl;
			continue;
		}
	concert3.addspeech();
	}
	concert3.show();

	return 0;
}