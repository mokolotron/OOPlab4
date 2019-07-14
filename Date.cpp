


#include "Date.h"



Date::Date()
{	
	day = 1;
	mounth = 1;
	year = 1000;
}

Date::Date(int _day, int _mounth, int _year)
{
	if (_day > 0 && _mounth > 0) {
		if (_day < max_day(_mounth)) day = _day;
		else std::cout << "���� ������� ������";

		if (_mounth <= 12) mounth = _mounth;
		else std::cout << "̳���� ������� ������";

		if (_year > 1000) year = _year;
		else std::cout << "г� ������� ������";
	}
	else std::cout << "�������, ������� ����� �������� ������ ����!";
}

Date::Date(const Date &obj) {
	day = (obj.day);
	mounth = (obj.mounth);
	year = (obj.year);
}

void Date ::  show() {
	std::cout << std::setfill('0') << std::setw(2) << get_day()
		<< '.' << std::setw(2) << get_mounth()
		<< '.' << std::setw(2) << get_year();
}

void Date::filldata() {
	int _day, _mounth, _year;
	std::cout << "������ ���� ������� �������� � ������ dd mm yyyy : ";
	std::cin >> _day >> _mounth >> _year;
	set_day(_day);
	set_mounth(_mounth);
	set_year(_year);
}

Date::~Date()
{
}

int Date::max_day(int _mounth) {
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};
	return days[_mounth - 1];
}


Date& Date::set_day(int _day) {
	if (_day > 0 && _day < max_day(mounth))
		day = _day;
	else {
		day = 1;
		std::cout << "�������: ������ ������� ����. ������ ����� :" << std::endl;
		std::cin >> _day;
		set_day(_day);
	}
	return *this;
}

Date& Date::set_mounth(int _mounth) {
	if (_mounth > 0 && _mounth <= 12)
		mounth = _mounth;
	else {
		mounth = 1;
		std::cout << "�������: ������ ������� �����. ������ ����� :" << std::endl;
		std:: cin >> _mounth;
		set_mounth(_mounth);
	}
	return *this;
}

Date& Date::set_year(int _year) {
	if (_year > 1000)
		year = _year;
	else {
		year = 1001;
		std::cout << "�������: ������ ������� �����. ������ ����� :" << std::endl;
		std::cin >> _year;
		set_year(_year);
	}
	return *this;
}
