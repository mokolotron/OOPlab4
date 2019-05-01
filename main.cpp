#include "Performer.h"
#include "Date.h"
#include "Speech.h"
#include "Concert.h"
#include <iostream>
#include <windows.h>
using namespace std;
struct Args {
	string conc_name;
	int dd, mm, yyyy;
	Speech * speech_arr = new Speech;
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


}

Args input_args() {
	Args args;
	string* conc_name = new string;
	cout << "¬вед≥ть назву концерту";
	cin >> *conc_name;
	int n = 2;
	Speech* speech_arr = new Speech[n];
	string tmpname, tmpsurname, tmpspeechname;
	



	for (int i = 0; i < n; i++) {
		cout << "¬вед≥ть ≤м€ та пр≥звище виконавц€";
		cin >> tmpname >> tmpsurname;

		cout << "¬вед≥ть назву виступу";
		cin >> tmpspeechname;

		Speech *tmpspeech = new Speech();
		tmpspeech->inp_comp();
		

		Performer* tmpperf = new Performer(tmpname, tmpsurname);
		Speech* tempi = new Speech(tmpspeech->get_comp(), *tmpperf, tmpspeechname);
		speech_arr[i] = *tempi;
		delete tmpspeech;
		delete tmpperf;
		delete tempi;
	}
	Concert concert2(conc_name, Date(11, 11, 2000), n, speech_arr);
	concert2.show();

	return args;
}