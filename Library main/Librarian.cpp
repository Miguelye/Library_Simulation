#include "Librarian.h"

Librarian::Librarian(string name, string lastName) : Borrower(name, lastName)
{
}

Librarian::~Librarian()
{
}

void Librarian::lendBook(Library& library, Borrower& borrower, int& index)
{
	if (borrower.currentAmountofBooks == borrower.maxAmountOfBooks)
	{
		cout << "Sorry, you already have" << borrower.maxAmountOfBooks << "books, I cannot lend you anymore." << endl;
		return;
	}
	else
	{
		library.getBook(index)->display();
		cout << "Thank you for choosing: " << endl;
		borrower.pbooks[borrower.currentAmountofBooks] = library.getBook(index);
		borrower.currentAmountofBooks++;
		library.currentAmountOfBooks--;

		for (size_t i = index; i < library.currentAmountOfBooks; i++)
		{
			library.pbooks[i] = library.pbooks[i + 1];
		}
	}
}

void Librarian::lendBook(Library& library, Librarian& librarian, int& index)
{
	if (librarian.currentAmountofBooks == librarian.maxAmountOfBooks)
	{
		cout << "Sorry, you already have" << librarian.maxAmountOfBooks << "books, I cannot lend you anymore." << endl;
		return;
	}
	else
	{
		cout << "Thank you for choosing: " << endl;
		library.getBook(index)->display();
		librarian.pbooks[librarian.currentAmountofBooks] = library.getBook(index);
		librarian.currentAmountofBooks++;
		library.currentAmountOfBooks--;

		for (size_t i = index; i < library.currentAmountOfBooks; i++)
		{
			library.pbooks[i] = library.pbooks[i + 1];
		}
	}
}

void Librarian::returningBook(Library& library, Borrower& borrower, int& index)
{

	if (borrower.currentAmountofBooks <= 0)
	{
		cout << "+++++There are no books to be returned++++" << endl;
	}
	else
	{
		do
		{
			cout << "Enter book's index" << endl;
			cin >> index;
		} while (!Checker.IsValid("ERROR, INVALID INPUT"));

		borrower.getBook(index)->display();
		cout << "Thank you for returning!" << endl;
		library.pbooks[library.currentAmountOfBooks] = borrower.getBook(index);
		borrower.currentAmountofBooks--;
		library.currentAmountOfBooks++;

		for (size_t i = index; i < borrower.currentAmountofBooks; i++)
		{
			borrower.pbooks[i] = borrower.pbooks[i + 1];
		}
	}
}

void Librarian::returningBook(Library& library, Librarian& librarian, int& index)
{
	if (librarian.currentAmountofBooks <= 0)
	{
		cout << "+++++There are no books to be returned+++++" << endl;
	}
	else
	{
		do
		{
			cout << "Enter book's index" << endl;
			cin >> index;
		} while (!Checker.IsValid("ERROR, INVALID INPUT"));

		cout << "Thank you for returning: " << endl;
		librarian.getBook(index)->display();
		library.pbooks[library.currentAmountOfBooks] = librarian.getBook(index);
		librarian.currentAmountofBooks--;
		library.currentAmountOfBooks++;

		for (size_t i = index; i < librarian.currentAmountofBooks; i++)
		{
			librarian.pbooks[i] = librarian.pbooks[i + 1];
		}
	}
}