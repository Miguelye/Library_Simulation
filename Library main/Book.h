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
	~Book();
	void fill();
	void fill(string, string, string);
	void display();
	int getBookID(){ return bookID; }
	static int getCounter(){ return counter; }
};