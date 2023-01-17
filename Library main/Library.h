#pragma once
#include "Book.h"
#include "Validations.h"
#include "Librarian.h"

class Library
{
public:
	
	Library();
	Library(int);
	~Library();
	void showBooks();
	void addBook(const Book*);
	friend class Librarian;

private:
	Validation Checker;
	const Book** pbooks;
	int currentAmountOfBooks;
	int maxAmountOfBooks;
	int bookChoice;
	const Book* getBook();
	const Book* getBook(int&);


	
};