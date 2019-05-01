#include <iostream>
#include <string>
#include "Compsition.h"
#include "Performer.h"
#include "Speech.h"


Speech::Speech()
{	
	 speech_nmae ="Назва виступу"  ;
	 Performer performer("default", "user");
	 comp = instrumental;
}

Speech::Speech(Composition _comp, Performer _performer , std::string _speech_nmae)
{
	comp = _comp;
	set_performer(_performer);
	speech_nmae = _speech_nmae;
}
Speech::Speech(const Speech& obj)
{
	comp = obj.comp;
	Performer performer(obj.performer);
	speech_nmae = obj.speech_nmae;

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
	case 0: std::cout << "instrumental" ; break;
	case 1: std::cout << "vocal" ; break;
	case 2: std::cout << "poetic" ; break;
	case 3: std::cout << "prose" ; break;
	};
}

void Speech::show()
{
	show_comp(comp);
	std::cout<< ' ' << speech_nmae << ' ' ;
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
	performer.set_name(_performer.get_name());
	performer.set_surname(_performer.get_surname());
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



  Composition Speech :: inp_comp() {
	using namespace std;

	Composition comp;
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
		comp = inp_comp();
	default:
		cout << "Невірно введено спробуйте щераз" << endl;
		comp = inp_comp();
		return comp;
		break;
	}
}
