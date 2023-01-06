#include <iostream>
#include "Book.h"

using namespace std;

int Book::bookID = 0;

void Book::fill()
{
	cout << "Enter Title : " << endl;
	cin >> title;
	cout << "Enter Author : " << endl;
	cin >> author;
	cout << "Enter Year : " << endl;
	cin >> Year;
}

void Book::display()
{
	cout << "Title: '" << title << "' Author: '" << author << "' Year: '" << Year << "'" << endl;
}

Book::Book()
{
	static int i = 0;
	cout << "Book constructor invoked: " << ++i << " times" << endl;
	title = "Null";
	author = "Null";
	Year = "Null";
}

Book::~Book()
{
	static int i = 0;
	cout << "Book Destructor invoked: " << ++i << " times" << endl;
}