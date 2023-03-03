#include <iostream>
#include "Book.h"

using namespace std;

int Book::counter = 0;

Book::Book()
{

}

Book::Book(const Book& obj)
{
	this->title	 = obj.title;
	this->author = obj.author;
	this->year   = obj.year;
	++counter;

	//static int i = 0;
	//cout << "Copy Book constructor invoked: " << ++i << " times" << endl;
}

Book::Book(string title, string author, string year)
{
	bookID = NULL;
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

//void Book::display() const
//{
//	cout << "Title: '" << title
//		 << "' Author: '" << author
//		 << "' Year: '" << year
//		 << "' BookID: '" << bookID
//		 << "'" << endl;
//	
//}

int Book::getBookID() const
{
	return bookID;
}

int Book::getCounter() //There is no need on definition to use the static key word. only on declaration
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