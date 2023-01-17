#include "Book.h"
#include "Library.h"
#include "User.h"
#include "Borrower.h"
#include "ListofBooks.h"
#include "Validations.h"

using namespace std;

// Fuctions
void bookCreation(Library&);
void storeToLibrary(Library&);
// Global Variables
int const SIZE_OF_ARRAY_OF_BOOKS = 63;

int main()
{
	//Objects Declaration
	Validation Checker;
	Borrower B1("Miguel", "Yepes");
	Library library(100);

	storeToLibrary(library);

	library.showBooks();
	cout << "Welcome " << B1.getName() << " " << B1.getLastName() << endl;

	bool IsExitOrBook = false;
	while (!IsExitOrBook)
	{
		
		cout << "Enter Q/q to exit or N/n to chose a book" << endl;
		char input;
		cin >> input;

		switch (input)
		{
		case 'Q':
		case 'q':
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return 0;
		case 'N':
		case 'n':
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			IsExitOrBook = true;
			break;
		default:
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Try again" << endl;
		}

		//if (input == 'Q' || input == 'q')
		//{
		//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
		//	return 0;
		//}
		//else if (input == 'N' || input == 'n')
		//{
		//	cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//	break;
		//}
		//else
		//{
		//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
		//	cout << "Invalid input. Try again" << endl;
		//}
	}

	int index;

	do
	{
		cout << "Enter book's index" << endl;
		cin >> index;
	} while (!Checker.IsValid("ERROR, INVALID INPUT"));

	library.getBook(index)->display();

	cout << library.getBook(index) << endl;



	//

	//cout << Book::getCounter() << endl;

	/*int index;
	cout << "would you like to pick a book? " << endl;
	cin >> index;
	library1.getBook(index)->display();*/
	return 0;
}

void storeToLibrary(Library& library)
{
	library.addBook(&b1);	library.addBook(&b11);	library.addBook(&b21);	library.addBook(&b31);	library.addBook(&b41);	library.addBook(&b51);	library.addBook(&b61);
	library.addBook(&b2);	library.addBook(&b12);	library.addBook(&b22);	library.addBook(&b32);	library.addBook(&b42);	library.addBook(&b52);	library.addBook(&b62);
	library.addBook(&b3);	library.addBook(&b13);	library.addBook(&b23);	library.addBook(&b33);	library.addBook(&b43);	library.addBook(&b53);	library.addBook(&b63);
	library.addBook(&b4);	library.addBook(&b14);	library.addBook(&b24);	library.addBook(&b34);	library.addBook(&b44);	library.addBook(&b54);
	library.addBook(&b8);	library.addBook(&b18);	library.addBook(&b25);	library.addBook(&b35);	library.addBook(&b45);	library.addBook(&b55);
	library.addBook(&b5);	library.addBook(&b15);	library.addBook(&b26);	library.addBook(&b36);	library.addBook(&b46);	library.addBook(&b56);
	library.addBook(&b6);	library.addBook(&b16);	library.addBook(&b27);	library.addBook(&b37);	library.addBook(&b47);	library.addBook(&b57);
	library.addBook(&b7);	library.addBook(&b17);	library.addBook(&b28);	library.addBook(&b38);	library.addBook(&b48);	library.addBook(&b58);
	library.addBook(&b9);	library.addBook(&b19);	library.addBook(&b29);	library.addBook(&b39);	library.addBook(&b49);	library.addBook(&b59);
	library.addBook(&b10);	library.addBook(&b20);	library.addBook(&b30);	library.addBook(&b40);	library.addBook(&b50);	library.addBook(&b60);
}