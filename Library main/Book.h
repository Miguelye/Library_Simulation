#pragma once
#include <string>

using namespace std;

class Book
{
private:
	string title;
	string author;
	string year;
	int bookID;
	static int counter;

public:
	Book();
	Book(string, string, string);
	~Book();
	void display() const;
	int getBookID() const;
	static int getCounter();
};