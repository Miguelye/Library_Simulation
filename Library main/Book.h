#pragma once
#include <string>

using namespace std;

class Book
{
private:
	string title;
	string author;
	string year;
	mutable int bookID;
	static int counter;
	void setBookID() const;
	void setCounter() const;

public:
	Book();
	Book(string, string, string);
	~Book();
	void display() const;
	int getBookID() const;
	static int getCounter();

	friend class Library;
};