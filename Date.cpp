

#include <iostream>
#include <iomanip>
#include "Date.h"



Date::Date()
{	
	std::cout << "введіть в форматі dd mm yyyy"<< std::endl;
	std::cin >>day;
	

	std::cin >>mounth;

	set_mounth(mounth);
	set_day(day);

	std::cin >> year;
	set_year(year);

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
	day = (obj.day);
	mounth = (obj.mounth);
	year = (obj.year);
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
	else {
		day = 1;
		std::cout << "Помилка: невірно введено день. Введіть щераз :" << std::endl;
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
		std::cout << "Помилка: невірно введено місяць. Введіть щераз :" << std::endl;
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
		std::cout << "Помилка: невірно введено місяць. Введіть щераз :" << std::endl;
		std::cin >> _year;
		set_year(_year);
	}
	return *this;
}
