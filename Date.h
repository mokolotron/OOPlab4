#pragma once
//#include "Date.cpp"
class Date
{
	int day;
	int mounth;
	int year;

	
public:
	Date();
	Date(int , int, int);
	Date(const Date& obj); //copy construct

	int get_day() { return day; };
	int get_mounth() { return mounth; };
	int get_year() { return year; };

	void show();

	Date& set_day(int);
	Date& set_mounth(int _mounth);
	Date& set_year(int _year);

	int max_day(int _mounth);
	~Date();
};

