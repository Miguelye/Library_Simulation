#pragma once
#include <string>


class Book
{
private:
	std::string title;
	std::string author;
	std::string Year;

public:
	static int bookID;

	Book();
	~Book();
	void fill();
	void display();
};