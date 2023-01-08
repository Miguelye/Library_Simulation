#include "Library.h"
#include <iostream>
#include <limits>

using namespace std;


int Library::currentAmountOfBooks = 0;

Library::Library()
{
	this->bookChoice = -1;
	this->maxAmountOfBooks = 5;
	static int i = 0;
	//cout << "Library Constructor invoked " << ++i << " times." << endl;
	this->pbooks = new const Book  * [this->maxAmountOfBooks];
	cout << "dynamically allocated array of: " << this->maxAmountOfBooks << " times." << endl;
}

Library::Library(int maxAmountOfBooks)
{
	this->bookChoice = -1;
	//static int i = 0;
	this->maxAmountOfBooks = maxAmountOfBooks;
	//cout << "Library Constructor invoked " << ++i << endl;
	this->pbooks = new const Book * [this->maxAmountOfBooks];
	cout << "dynamically allocated array of: " << this->maxAmountOfBooks << " times." << endl;
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
	currentAmountOfBooks++;
}

const Book* Library::getBook()
{
	if (pbooks[0])
		return pbooks[0];
	else
	{
		cout << "No books availables." << endl;
		return 0;
	}
}

const Book* Library::getBook(int index)
{
	while (!isValid("ERROR: Invalid input."))
	{
		Library::showBooks();
		cin >> index;
	}

	bool isBookValid = index > currentAmountOfBooks - 1 || index < 0;

	while (isBookValid)
	{
		system("cls");
		Library::showBooks();
		cout << "Error. out of range input" << endl;
		cin >> index;
		isBookValid = index > currentAmountOfBooks - 1 || index < 0;
	}
	return pbooks[index];
}

void Library::showBooks()
{
	cout << "Welcome to Condor's Library" << endl;
	cout << "The availables books are:" << endl << endl;

	for (size_t i = 0; i < currentAmountOfBooks; i++)
	{
		cout << "index: " << i << " - ";
		(pbooks[i]->display());
	}
}

bool Library::isValid(string errorMessage)
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		cout << errorMessage << endl << endl;
		return false;
	}
	return true;
}