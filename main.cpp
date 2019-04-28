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

	//?
	//for (int i = 0; i < n; i++) {
	//	Speech *temp = new Speech;
	//	temp->set_comp(instrumental); // ?
	//	temp->set_performer(Performer("Some", "User"));
	//	temp->set_speech_nmae("name1");
	//	speech_arr[i] = *temp;
	//	delete temp;
	//}
	Concert concert2(conc_name, 22, 11, 1111, n, speech_arr);
	concert2.show();

}

Args input_args() {
	Args args;

	return args;
}