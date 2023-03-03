#include "Library.h"
#include <iostream>
#include <limits>

using namespace std;

Library::Library()
{
	this->bookChoice = -1;
	this->currentAmountOfBooks = 0;
	this->maxAmountOfBooks = 5;
	this->pbooks = new const Book* [this->maxAmountOfBooks];

	//static int i = 0;
	//cout << "Library Constructor invoked " << ++i << " times." << endl;
	//cout << "dynamically allocated array of: " << this->maxAmountOfBooks << " times." << endl;
}

Library::Library(int maxAmountOfBooks)
{
	this->bookChoice = -1;
	this->currentAmountOfBooks = 0;
	this->maxAmountOfBooks = maxAmountOfBooks;
	this->pbooks = new const Book* [this->maxAmountOfBooks];

	//static int i = 0;
	//cout << "Library Constructor invoked " << ++i << endl;
	//cout << "dynamically allocated array of: " << this->maxAmountOfBooks << " times." << endl;
}

Library::~Library()
{
	//static int i = 0;
	//cout << "Library Destructor invoked " << ++i << " times." << endl;
	delete[] pbooks;
}

void Library::addBook(const Book* book)
{
	if (currentAmountOfBooks == maxAmountOfBooks - 1)
	{
		cout << "No more space for new books" << endl;
		return;
	}
	pbooks[currentAmountOfBooks] = book;
	pbooks[currentAmountOfBooks]->bookID = currentAmountOfBooks + 1;
	currentAmountOfBooks++;
}

const Book* Library::getBook()
{
	if (currentAmountOfBooks >= 0)
	{
		return pbooks[0];
	}
	else
	{
		cout << "No books availables." << endl;
		return nullptr;
	}
}

const Book* Library::getBook(int& index)
{
	bool isBookValid = index > currentAmountOfBooks - 1 || index < 0;

	while (isBookValid)
	{
		cout << endl << "Error. out of range input" << endl;
		do
		{
			cout << "Enter book's index" << endl;
			cin >> index;
		} while (!Checker.IsValid("ERROR, INVALID INPUT"));
		isBookValid = index > currentAmountOfBooks - 1 || index < 0;
	}

	return pbooks[index];
}

void Library::showBooks()
{
	if (currentAmountOfBooks == 0)
	{
		cout << "No Books Availables" << endl;
	}
	else
	{
		cout << "Welcome to Condor's Library" << endl;
		cout << "The availables books are:" << endl << endl;

		for (size_t i = 0; i < currentAmountOfBooks; i++)
		{
			cout << "index: " << i << " - ";
			cout << *pbooks[i];
		}
		cout << endl;
	}
}