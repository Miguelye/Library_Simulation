#include "Borrower.h"

Borrower::Borrower(string name, string lastName) : User(name, lastName)
{
	maxAmountOfBooks = 5;
	currentAmountofBooks = 0;
	this->pbooks = new const Book* [this->maxAmountOfBooks];
}

Borrower::~Borrower()
{
	delete[] pbooks;
}

const Book* Borrower::getBook()
{
	if (currentAmountofBooks >= 0)
	{
		return pbooks[0];
	}
	else
	{
		cout << "No books availables." << endl;
		return pbooks[0];
	}
}

const Book* Borrower::getBook(int& index)
{
	while (!(Checker.IsValid("ERROR: Invalid input.")))
	{
		Borrower::showBooks();
		cin >> index;
	}

	bool isBookValid = index > currentAmountofBooks - 1 || index < 0;

	while (isBookValid)
	{
		system("cls");
		Borrower::showBooks();
		cout << "Error. out of range input" << endl;
		cin >> index;
		isBookValid = index > currentAmountofBooks - 1 || index < 0;
	}
	return pbooks[index];
}

void Borrower::showBooks()
{
	cout << "You currently have: " << endl << endl;
	if (currentAmountofBooks == 0)
	{
		cout << "No books on hand" << endl << endl;
	}
	else
	{
		for (size_t i = 0; i < currentAmountofBooks; i++)
		{
			cout << "index: " << i << " - ";
			(pbooks[i]->display());
		}
		cout << endl;
	}
}