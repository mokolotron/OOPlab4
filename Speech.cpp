#include "Speech.h"
#include "Compsition.h"
#include "Performer.h"
#include <iostream>
#include <string>
//using namespace std;
Speech::Speech()
{
}

Speech::Speech(Composition _comp, Performer _performer , std::string _speech_nmae)
{
	
	comp = _comp;
	performer = _performer;
	speech_nmae = _speech_nmae;
}

Composition Speech::get_comp()
{
	return comp;
}

Performer Speech::get_performer()
{
	return performer;
}

std::string Speech::get_speech_nmae()
{
	return speech_nmae;
}

void Speech::show()
{
	std::cout << comp << ' ' << speech_nmae << ' ' << std::endl;
	performer.show();
}

Speech Speech::set_comp(Composition _comp)
{	
	comp = _comp;
	return *this;
}

Speech Speech::set_performer(Performer _performer)
{
	performer = _performer;
	return *this;
}

Speech Speech::set_speech_nmae(std::string _name)
{
	speech_nmae = _name;
	return *this;
}


Speech::~Speech()
{
}
