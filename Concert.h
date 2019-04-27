
#pragma once

class Concert
{
	std::string * sponsor;
	Date date;
	Speech * speechs;
public:
	Concert();

	void show();
	~Concert();
};

