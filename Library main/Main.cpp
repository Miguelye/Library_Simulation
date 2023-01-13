#include "Book.h"
#include "Library.h"
#include <iostream>

using namespace std;


int main()
{
	Book const b1("Bible", "Jesus", "20");			//const key word means the variable members will be constant
	Book const b2("Cien", "Gaby", "1973");
	Book const b3("Illiad", "Homer", "400 AD");
	Book const b4 = b1;								//This invokes the Copy constructor.

	Library library1(5);

	cout << endl << endl;

	cout << "Address of original (before) b1: " << &b1 << endl;

	//library1.addBook(&b1);
	//library1.addBook(&b2);
	//library1.addBook(&b3);
	//library1.addBook(&b4);

	//cout << "Address of original (after) b1: " << library1.getBook(1) << endl;

	cout << endl << endl;

	library1.showBooks();
	
	//cout << Book::getCounter() << endl;

	/*int index;
	cout << "would you like to pick a book? " << endl;
	cin >> index;
	library1.getBook(index)->display();*/
	return 0;
}