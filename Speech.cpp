#include <iostream>
#include <string>
#include "Compsition.h"
#include "Performer.h"
#include "Speech.h"


Speech::Speech()
{	
	std::cout << "Введіть назву виступу" << std::endl;
	std::cin >> speech_nmae;

	comp = inp_comp(comp);



	


}

Speech::Speech(Composition _comp, Performer _performer , std::string _speech_nmae)
{
	comp = _comp;
	performer = _performer;
	speech_nmae = _speech_nmae;
}
//getters
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

//shows
void Speech::show_comp(Composition comp) {
	switch (comp)
	{
	case 0: std::cout << "instrumental" << std::endl; break;
	case 1: std::cout << "vocal" << std::endl; break;
	case 2: std::cout << "poetic" << std::endl; break;
	case 3: std::cout << "prose" << std::endl; break;
	};
}

void Speech::show()
{
	show_comp(comp);
	std::cout << speech_nmae << ' ' << std::endl;
	performer.show();
}


//setters
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



  Composition Speech :: inp_comp(Composition comp) {
	using namespace std;


	int input;
	cout << "Введіть номер типу твору. Щоб побачити можливі варіанти твору введіть \'-1\'  " << endl;
	cin >> input;
	switch (input)
	{
	case 0: comp = instrumental; return comp; break;
	case 1: comp = vocal; return comp; break;
	case 2: comp = poetic; return comp; break;
	case 3: comp = prose; return comp; break;
	case -1:  
		cout << '0' << " = " << "instrumental" << endl;
		cout << '1' << " = " << "vocal" << endl;
		cout << '2' << " = " << "poetic" << endl;
		cout << '3' << " = " << "prose" << endl;
		comp = inp_comp(comp);
	default:
		cout << "Невірно введено спробуйте щераз" << endl;
		comp = inp_comp(comp);
		return comp;
		break;
	}
}
