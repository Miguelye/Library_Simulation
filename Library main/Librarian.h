#pragma once
#include "Borrower.h"
#include "Library.h"

class Librarian : public Borrower
{
public:
	Librarian(string, string);
	~Librarian();
	const Book* LendBook(Library&, Borrower&);
	const Book* LendBook(Library&, Librarian&);


private:

};
