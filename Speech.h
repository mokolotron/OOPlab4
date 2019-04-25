#pragma once
#include "Compsition.h"
#include "Performer.h"
#include <string>

class Speech
{
private:
	Composition comp;
	Performer performer;
	std::string speech_nmae;
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

