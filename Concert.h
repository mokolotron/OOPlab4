
#pragma once
#include "Speech.h"
#include <time.h> 


class Concert
{
	std::string * sponsor;
	Date date;
	Speech * speechs;
	int coun_speech;
	
public:
	Concert();
	Concert(std::string *s, Date _date, int _coun_speech, Speech* speech_arr) :
		sponsor(s), date(_date), coun_speech(_coun_speech), speechs(speech_arr) {};
	Concert(const Concert& obj);
	void short_show();
	void show();
	void addspeech();
	~Concert();
	void filldata();

	Speech* addsize(Speech* old_arr, int old_size, int new_size);
};

