#pragma once
#include "User.h"
#include "Book.h"
#include "Validations.h"

class Borrower : public User
{
public:
	Borrower(string, string);
	~Borrower();
	const Book& getBook();
	const Book& getBook(int);
	void showBooks();

	Borrower(const Borrower&) = delete;
	Borrower& operator= (const Borrower&) = delete;
private:
	Validation Checker;
	const Book* pbooks;
	int maxAmountOfBooks;
	int currentAmountofBooks;
};