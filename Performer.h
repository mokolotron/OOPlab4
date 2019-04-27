
#pragma once
#include <string>




class Performer
{
	std::string * name ;
	std::string * surname ;
public:
	Performer();

	Performer(const Performer &obj);
	Performer(std::string _name, std::string _surname);

	
	~Performer();

	std::string get_name() { return *name; };
	std::string get_surname() { return *surname; };
	
	void show();

	Performer& set_name(std::string str);
	Performer& set_surname(std::string str);


};

