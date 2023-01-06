#pragma once
#include "Book.h"

class Library
{
public:
	static int currentAmountOfBooks;
	Library();
	Library(int);
	~Library();
	void addBook(Book*);
	Book* getBook();
	Book* getBook(int);
	void showBooks();

private:
	Book** pbooks;
	int maxAmountOfBooks;
};