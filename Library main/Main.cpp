#include "Book.h"
#include "Library.h"
#include <iostream>

using namespace std;


int main()
{
	Book const b1("Bible", "Jesus", "20");
	Book const b2("Cien", "Gaby", "1973");
	Book const b3("Illiad", "Homer", "400 AD");

	Library library1(5);

	//cout << "Address of original (before) b1: " << &b1 << endl;

	library1.addBook(&b1);
	library1.addBook(&b2);
	library1.addBook(&b3);

	//cout << "Address of original (after) b1: " << library1.getBook(1) << endl;

	cout << endl << endl;

	library1.showBooks();

	int index;
	cout << "would you like to pick a book? " << endl;
	cin >> index;
	library1.getBook(index)->display();
}