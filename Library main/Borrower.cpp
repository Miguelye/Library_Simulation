#include "Borrower.h"

Borrower::Borrower(string name, string lastName) : User(name, lastName)
{
	maxAmountOfBooks = 5;
	currentAmountofBooks = -1;
	this->pbooks = new const Book * [this->maxAmountOfBooks];
}

Borrower::~Borrower()
{
	delete[] pbooks;
}

const Book* Borrower::getBook()
{
	return this->pbooks[currentAmountofBooks];
}
const Book* Borrower::getBook(int index)
{
	return this->pbooks[index];
}
void Borrower::showBooks()
{

}