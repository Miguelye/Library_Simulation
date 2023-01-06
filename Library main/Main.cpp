#include "Book.h"
#include "Library.h"
#include <iostream>

using namespace std;


int main()
{
	Book b1, b2, b3;

	b1.fill();
	b2.fill();

	Library library1(5);

	cout << "Address of original (before) b1: " << &b1 << endl;

	library1.addBook(&b1);
	library1.addBook(&b2);
	library1.addBook(&b3);

	cout << "Address of original (after) b1: " << library1.getBook(1) << endl;

	library1.getBook(2)->display();

	cout << endl;

	library1.showBooks();
	b1.display();
}