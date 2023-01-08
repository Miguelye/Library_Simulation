#pragma once
#include "Book.h"
#include "validations.h"

class Library
{
public:
	static int currentAmountOfBooks;
	Library();
	Library(int);
	~Library();
	void addBook(const Book*);
	const Book* getBook();
	const Book* getBook(int);
	void showBooks();

private:
	const Book** pbooks;
	int maxAmountOfBooks;
	int bookChoice;
	bool isValid(string);
};