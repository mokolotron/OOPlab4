#include <string>
#include <iostream>
#include "Performer.h"






Performer :: Performer() {
	name = new std::string;
	surname = new std::string;

	std::cout << "введ≥ть призвиче та ≥м€ виконавц€ через пропуск" << std::endl;
	std::cin >> *surname >> *name;
}

Performer::Performer(const Performer &obj)
{
	name = new std::string;
	surname = new std::string;

	name = obj.name;
	surname = obj.surname;

}


Performer::Performer(std::string _name = "NULL", std::string _surname = "NULL") {
	name = new std::string;
	surname = new std::string;

	*name = _name;
	*surname = _surname;
}

Performer::~Performer()
{
	delete name;
	delete surname;
}



void Performer::show() {
	std::cout << *name << ' ' << *surname;
}


Performer& Performer::set_name(std::string str) {
	*name = str;
	return *this;
}

Performer& Performer::set_surname(std::string str) {
	*surname = str;
	return *this;
}