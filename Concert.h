
#pragma once

class Concert
{
	std::string * sponsor;
	Date date;
	Speech * speechs;
	int coun_speech;
public:
	Concert();
	Concert(std::string* s, int dd, int mm, int yyyy, int coun_speech, Speech* speech_arr) :
		sponsor(s), date(dd, mm, yyyy), coun_speech(coun_speech), speechs(speech_arr) {};


	void show();
	~Concert();
};

