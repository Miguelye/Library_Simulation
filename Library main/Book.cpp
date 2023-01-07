#include <iostream>
#include "Book.h"

using namespace std;

int Book::counter = 0;

void Book::fill()
{
	cout << "Enter Title : " << endl;
	cin >> title;
	cout << "Enter Author : " << endl;
	cin >> author;
	cout << "Enter Year : " << endl;
	cin >> year;
}

void Book::fill(string title, string author, string year)
{
	this->title = title;
	this->author = author;
	this->year = year;
}

void Book::display()
{
	cout << "Title: '" << title << "' Author: '" << author << "' Year: '" << year << "'" << " BookID: '" << bookID << "'" << endl;
	
}

Book::Book()
{
	counter++;
	bookID = counter;
	//static int i = 0;
	//cout << "Book constructor invoked: " << ++i << " times" << endl;
	title = "Null";
	author = "Null";
	year = "Null";
}

Book::~Book()
{
	//static int i = 0;
	//cout << "Book Destructor invoked: " << ++i << " times" << endl;
}