#pragma once
#include <string>
#include "Compsition.h"
#include "Performer.h"


class Speech
{
private:
	Composition comp;
	Performer performer;
	std::string speech_nmae;

	Composition inp_comp(Composition comp);
	void show_comp(Composition comp);
	 

public:
	Speech();
	Speech(Composition, Performer, std::string);
	
	Composition get_comp();
	Performer get_performer();
	std::string get_speech_nmae();

	void show();

	Speech set_comp(Composition);
	Speech set_performer(Performer);
	Speech set_speech_nmae(std::string _name);

	~Speech();
};

