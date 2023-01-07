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
	this->pbooks = new Book * [this->maxAmountOfBooks];
	cout << "dynamically allocated array of: " << this->maxAmountOfBooks << " times." << endl;
}

Library::Library(int maxAmountOfBooks)
{
	this->bookChoice = -1;
	//static int i = 0;
	this->maxAmountOfBooks = maxAmountOfBooks;
	//cout << "Library Constructor invoked " << ++i << endl;
	this->pbooks = new Book * [this->maxAmountOfBooks];
	cout << "dynamically allocated array of: " << this->maxAmountOfBooks << " times." << endl;
}

Library::~Library()
{
	//static int i = 0;
	//cout << "Library Destructor invoked " << ++i << " times." << endl;
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
	else
	{
		cout << "No books availables." << endl;
		return 0;
	}
}

Book* Library::getBook(int index)
{
	bool isBookValid = index > currentAmountOfBooks-1 || index < 0;
	while (isBookValid)
	{
		system("cls");
		string choice;
		do
		{
			Library::showBooks();

			cout << "ERROR: Invalid input." << endl;
			cout << "Please enter number again or press Q to quit." << endl << endl;

			cin >> choice;
			if (choice == "Q" || "q")
			{
				return nullptr;
			}

			int i = stoi(choice);
			if (i < currentAmountOfBooks - 1 || i > 0)
			{

			}
		} while (!isValid("Please enter number again or press Q to quit."));

	}
	return pbooks[index];
}

void Library::showBooks()
{
	bool tmpBool;
	do
	{
		cout << "Welcome to Condor's Library" << endl;
		cout << "The availables books are:" << endl << endl;

		for (size_t i = 0; i < currentAmountOfBooks; i++)
		{
			cout << "index: " << i << " - ";
			(pbooks[i]->display());
		}

		cout << "would you like to pick a book? " << endl;
		cin >> bookChoice;
		tmpBool = !isValid("Please try again: ");
	} while (tmpBool);


	this->getBook(bookChoice)->display();
}

bool Library::isValid(string errorMessage)
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "ERROR: Invalid input." << endl;
		cout << errorMessage << endl << endl;
		return false;
	}
	return true;
}