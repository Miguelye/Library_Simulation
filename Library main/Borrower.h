#pragma once
#include "User.h"
#include "Book.h"

class Borrower : public User
{
public:
	Borrower(string, string);
	~Borrower();
	const Book* getBook();
	const Book* getBook(int);
	void showBooks();
private:
	const Book** pbooks;
	int maxAmountOfBooks;
	int currentAmountofBooks;
};