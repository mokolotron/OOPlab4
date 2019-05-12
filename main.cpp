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

	Concert concert2;
	concert2.filldata();
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



	//string* conc_name = new string;
	//cout << "Введіть назву концерту : ";
	//cin >> *conc_name;
	//int n = 1;
	//Speech* speech_arr = new Speech[n];
	//string tmpname, tmpsurname, tmpspeechname;
	//int inp_n, dd, mm, yyyy; int input = 1;
	//
	//cout << "Введіть Дату початку концерту у форматі dd mm yyyy : ";
	//cin >> dd>>mm>> yyyy;
	//args.date = Date(dd, mm, yyyy);
	//int i = 0;
	//while (true) {
	//	cout<<endl << "Щоб довати ще один виступ введыть \' 1 \' , щоб вийти введіть 0" << endl;
	//	cin >> input;

	//	if (input == 0) break;
	//	else if (input != 1){ cout << "Невірно введено" << endl;
	//	continue;
	//	}
	//	n += 1;
	//	speech_arr = Concert::addsize(speech_arr, n - 1, n);
	//	speech_arr[i] = input_speech();
	//	
	//	i += 1;
	//}

	//args.conc_name = conc_name;
	//args.speech_arr = speech_arr;
	//for (int i = 0; i < n; i++)
	//	args.speech_arr[i] = speech_arr[i];
	////delete[] speech_arr;
	


	/*string tmpname, tmpsurname, tmpspeechname;
	cout << "Введіть назву нового виступу : ";
	cin >> tmpspeechname;

	cout << "Введіть Імя та прізвище виконавця цього виступу : ";
	cin >> tmpname >> tmpsurname;

	Speech* tmpspeech = new Speech();
	tmpspeech->set_comp(tmpspeech->inp_comp());

	Performer tmpperf(tmpname, tmpsurname);
	Speech tempi(tmpspeech->get_comp(), tmpperf, tmpspeechname);

	delete tmpspeech;
	return tempi;*/

