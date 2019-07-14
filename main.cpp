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

	cout <<"��� ���� ��������� ������������� �� ������������: "<<endl;
	concert.show();
	cout << endl << endl;

	Concert* tconcert = new Concert();
	tconcert->filldata();
	Concert concert2(tconcert->get_sponsor(), tconcert->get_date(), tconcert->get_coun(), tconcert->get_speeechs());
	delete tconcert;
	concert2.show();
	cout << endl;
	cout << "������� �����" << endl;
	concert2.short_show();
	
	cout <<endl<< endl << "�� ��� �� ������� � �������� ���� ���� �������" << endl
		<< "³� ��������� ������������� ���������" << endl;
	Concert concert3(concert2);
	cout << "������� �����" << endl;
	concert3.show();
	cout << endl;
	concert3.short_show();

	while (true) {
		cout<<endl << "��� ������ �� ���� ������ �� �������� ����� ������� \' 1 \' , ��� ����� ������ 0" << endl;
		cin >> input;
		if (input == 0) break;
		else if (input != 1) {
			cout << "������ �������" << endl;
			continue;
		}
	concert3.addspeech();
	}
	concert3.show();

	return 0;
}