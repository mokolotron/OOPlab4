#include "Performer.h"
#include "Date.h"
#include "Speech.h"
#include "Concert.h"
#include <iostream>
#include <windows.h>
using namespace std;
struct Args {
	string *conc_name;
	Date date;
	Speech * speech_arr = new Speech;
	int n;
};
Args input_args();
Speech* addsize(Speech* old_arr, int old_size, int new_size);


int main() {
	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	Concert concert;

	cout <<"Цей обєкт створений конструктором по замовчуванню: "<<endl;
	concert.show();
	cout << endl << endl;


	Args args_struct = input_args();

	Concert concert2(args_struct.conc_name,args_struct.date , args_struct.n, args_struct.speech_arr);
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

	return 0;
}

Args input_args() {
	Args args;
	string* conc_name = new string;
	cout << "Введіть назву концерту : ";
	cin >> *conc_name;
	int n = 1;
	Speech* speech_arr = new Speech[n];
	string tmpname, tmpsurname, tmpspeechname;
	int inp_n, dd , mm, yyyy;
	
	cout << "Введіть Дату початку концерту у форматі dd mm yyyy : ";
	cin >> dd>>mm>> yyyy;
	args.date = Date(dd, mm, yyyy);

	for (int i = 0; i < n; i++) {

		cout << "Введіть назву виступу #" << i+1 <<" : ";
		cin >> tmpspeechname;

		cout << "Введіть Імя та прізвище виконавця цього виступу : ";
		cin >> tmpname >> tmpsurname;
				
		Speech *tmpspeech = new Speech();
		tmpspeech->set_comp(tmpspeech->inp_comp());
		
		Performer* tmpperf = new Performer(tmpname, tmpsurname);
		Speech* tempi = new Speech(tmpspeech->get_comp(), *tmpperf, tmpspeechname);
		speech_arr[i] = *tempi;

		delete tmpperf;
		delete tmpspeech;
		delete tempi;

		cout << "Щоб добавити ще один виступ введіть \'1\' : ";
		cin >> inp_n;
		if (inp_n == 1) {
			++n;
			speech_arr = addsize(speech_arr, n-1, n);
		}
	}
	args.conc_name = conc_name;
	args.speech_arr = speech_arr;
	for (int i = 0; i < n; i++)
		args.speech_arr[i] = speech_arr[i];
	//delete[] speech_arr;
	args.n = n;
	return args;
}

Speech* addsize(Speech* old_arr,int old_size ,int new_size) {
	Speech * new_arr = new Speech[new_size];
	for (int i = 0; i < old_size; i++)
		new_arr[i] = old_arr[i];
	delete [] old_arr;
	return new_arr;
}