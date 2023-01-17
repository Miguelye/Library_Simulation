#pragma once
#include "User.h"
#include "Book.h"
#include "Validations.h"

class Borrower : public User
{
public:
	Borrower(string, string);
	~Borrower();
	const Book* getBook();
	const Book* getBook(int&);
	void showBooks();
	void returningBook();
	Borrower(const Borrower&) = delete;
	Borrower& operator= (const Borrower&) = delete;

	
	friend class Librarian;

private:
	Validation Checker;
	const Book** pbooks;
	int maxAmountOfBooks;
	int currentAmountofBooks;
};

