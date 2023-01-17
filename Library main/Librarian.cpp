#include "Librarian.h"

Librarian::Librarian(string name, string lastName) : Borrower (name, lastName)
{
}

Librarian::~Librarian()
{
}

const Book* LendBook(Library& library, Borrower& borrower, int index)
{
	return library.getBook(index);
}

const Book* LendBook(Library& library, Librarian librarian, int index)
{
	return library.getBook(index);

}