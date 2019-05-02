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

int main() {
	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	Concert concert;
	cout << endl;
	concert.show();

	cout << endl;
	Args args_struct = input_args();

	Concert concert2(args_struct.conc_name,args_struct.date , args_struct.n, args_struct.speech_arr);
	concert2.show();
}

Args input_args() {
	Args args;
	string* conc_name = new string;
	cout << "¬вед≥ть назву концерту : ";
	cin >> *conc_name;
	int n = 1;
	Speech* speech_arr = new Speech[n];
	string tmpname, tmpsurname, tmpspeechname;
	int inp_n;
	
	for (int i = 0; i < n; i++) {

		cout << "¬вед≥ть назву виступу #" << i+1 <<" : ";
		cin >> tmpspeechname;

		cout << "¬вед≥ть ≤м€ та пр≥звище виконавц€ цього виступу : ";
		cin >> tmpname >> tmpsurname;
				
		Speech *tmpspeech = new Speech();
		tmpspeech->set_comp(tmpspeech->inp_comp());
		
		Performer* tmpperf = new Performer(tmpname, tmpsurname);
		Speech* tempi = new Speech(tmpspeech->get_comp(), *tmpperf, tmpspeechname);
		speech_arr[i] = *tempi;
		delete tmpspeech;
		delete tmpperf;
		delete tempi;

		cout << "ўоб добавити ще один виступ введ≥ть \'1\' : ";
		cin >> inp_n;
		if (inp_n == 1) n++;
	}
	args.conc_name = conc_name;
	args.speech_arr = speech_arr;
	args.date = Date(11, 11, 2000);
	args.n = n;
	return args;
}