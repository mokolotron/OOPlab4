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

	string *conc_name = new string;
	*conc_name = "conc name";
	int n = 2;
	Speech* speech_arr = new Speech[n];


	for (int i = 0; i < n; i++) {
		
		Performer *tmpperf = new Performer("new", "user");
		Speech* tempi = new Speech(vocal, *tmpperf, "name1");
		//tempi->set_comp(instrumental); // ?
		//tempi->set_performer(*tmpperf);
		//tempi->set_speech_nmae("name1");
		speech_arr[i] = *tempi;
		delete tempi;
	}
	Concert concert2(conc_name, Date(11, 11, 2000), n, speech_arr);
	concert2.show();

}

Args input_args() {
	Args args;

	return args;
}