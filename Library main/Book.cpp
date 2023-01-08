#include <iostream>
#include "Book.h"

using namespace std;

int Book::counter = 0;

Book::Book()
{
	counter++;
	//static int i = 0;
	//cout << "Book constructor invoked: " << ++i << " times" << endl;
	cout << "Enter Title : " << endl;
	cin >> title;
	cout << "Enter Author : " << endl;
	cin >> author;
	cout << "Enter Year : " << endl;
	cin >> year;
}

Book::Book(string title, string author, string year)
{
	counter++;
	//static int i = 0;
	//cout << "Book constructor invoked: " << ++i << " times" << endl;
	this->title = title;
	this->author = author;
	this->year = year;
}

Book::~Book()
{
	//static int i = 0;
	//cout << "Book Destructor invoked: " << ++i << " times" << endl;
}

void Book::display() const
{
	cout << "Title: '" << title << "' Author: '" << author << "' Year: '" << year << "'" << " BookID: '" << bookID << "'" << endl;
	
}

int Book::getBookID() const
{
	return bookID;
}

int Book::getCounter()
{ 
	return counter; 
}

void Book::setBookID() const
{
	bookID = counter;
}


void Book::setCounter() const
{

}