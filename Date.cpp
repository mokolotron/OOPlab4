
#include "Date.h"
#include <iostream>
#include <iomanip>
//using namespace std;


Date::Date()
{	
	day = 0;
	mounth = 0;
	year = 0;
}

Date::Date(int _day = 1, int _mounth = 1, int _year = 1001)
{
	if (_day > 0 && _mounth > 0) {
		if (_day < max_day(_mounth)) day = _day;
		else std::cout << "День уведено невірно";

		if (_mounth <= 12) mounth = _mounth;
		else std::cout << "Місяць уведено невірно";

		if (_year > 1000) year = _year;
		else std::cout << "Рік уведено невірно";
	}
	else std::cout << "Помилка, уведено відэмні значення замість дати!";
}

Date::Date(const Date &obj) {
	set_day(obj.day);
	set_mounth(obj.mounth);
	set_year(obj.year);
}

void Date ::  show() {
	std::cout << std::setfill('0') << std::setw(2) << get_day()
		<< '.' << std::setw(2) << get_mounth()
		<< '.' << std::setw(2) << get_year();
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
	return *this;
}

Date& Date::set_mounth(int _mounth) {
	if (_mounth > 0 && _mounth < 12)
		mounth = _mounth;
	return *this;
}

Date& Date::set_year(int _year) {
	if (_year > 1000)
		year = _year;
	return *this;
}
