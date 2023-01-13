#pragma once
#include "Book.h"
#include "validations.h"

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
	const Book** pbooks;
	int currentAmountOfBooks;
	int maxAmountOfBooks;
	int bookChoice;
	bool isValid(string);
};