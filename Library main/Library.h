#pragma once
#include "Book.h"
#include "Validations.h"

class Library
{
public:
	
	Library();
	Library(int);
	~Library();
	void addBook(const Book*);
	const Book* getBook();
	const Book* getBook(int);
	//Create overload function getBook(string) for Exit the program.
	void showBooks();

private:
	Validation Checker;
	const Book** pbooks;
	int currentAmountOfBooks;
	int maxAmountOfBooks;
	int bookChoice;

	friend class Librarian;
};