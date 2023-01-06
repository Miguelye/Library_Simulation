#include "Library.h"
#include <iostream>

using namespace std;

int Library::currentAmountOfBooks = 0;

Library::Library()
{
	this->maxAmountOfBooks = 5;
	static int i = 0;
	cout << "Library Constructor invoked " << ++i << " times." << endl;
	this->pbooks = new Book * [this->maxAmountOfBooks];
	cout << "dynamically allocated array of: " << this->maxAmountOfBooks << " times." << endl;
}

Library::Library(int maxAmountOfBooks)
{
	static int i = 0;
	this->maxAmountOfBooks = maxAmountOfBooks;
	cout << "Library Constructor invoked " << ++i << endl;
	this->pbooks = new Book * [this->maxAmountOfBooks];
	cout << "dynamically allocated array of: " << this->maxAmountOfBooks << " times." << endl;
}

Library::~Library()
{
	static int i = 0;
	cout << "Library Destructor invoked " << ++i << " times." << endl;
	delete[] pbooks;
}

void Library::addBook(Book* book)
{
	if (currentAmountOfBooks == maxAmountOfBooks - 1)
	{
		cout << "No more space for new books" << endl;
		return;
	}
	pbooks[currentAmountOfBooks] = book;
	currentAmountOfBooks++;
}

Book* Library::getBook()
{
	if (pbooks[0])
		return pbooks[0];
}

Book* Library::getBook(int index)
{
	bool isBookValid = index > currentAmountOfBooks || index <= 0;
	while (isBookValid)
	{
		char ch;
		cout << "ERROR: Invalid input." << endl;
		cout << "Please enter number again or press Q to quit." << endl;
		cin >> ch;
		if (ch == 'Q' || 'q')
		{
			return 0;
		}

	}
	return pbooks[index - 1];
}

void Library::showBooks()
{
	for (size_t i = 0; i < currentAmountOfBooks; i++)
	{
		cout << "index: " << i << " - ";
		(pbooks[i]->display());
	}
}