#pragma once
#include "Library.h"
#include "Borrower.h"

class Librarian : public Borrower
{
public:
	Librarian(string, string);
	~Librarian();
	void lendBook(Library&, Borrower&, int&);
	void lendBook(Library&, Librarian&, int&);
	void returningBook(Library&, Borrower&, int&);
	void returningBook(Library&, Librarian&, int&);

private:

};