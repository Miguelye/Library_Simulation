#include "Book.h"
#include "Library.h"
#include "User.h"
#include "Borrower.h"
#include "ListofBooks.h"
#include "Validations.h"
#include "Librarian.h"

using namespace std;

// Fuctions
void bookCreation(Library&);
void storeToLibrary(Library&);
void returningBook(Library&, Librarian&, Librarian&);
void returningBook(Library&, Librarian&, Borrower&);


// Global Variables
int const SIZE_OF_ARRAY_OF_BOOKS = 63;

//Global Objects
Validation Checker;

int main()
{
	//Objects Declaration

	Library library(100);
	Borrower B1("Miguel", "Yepes");
	Librarian L1("Andres", "Rodriguez");
	Librarian L2("Jesus", "MEX");
	storeToLibrary(library);

	while (true)
	{
		cout << "Are you 1." << B1.getName() << " or 2." << L2.getName() << endl;

		int BorrowerOrLibrarian;
		bool isBorL = true;
		while (isBorL)
		{		
			do
			{
				cout << "Enter 1 or 2." << endl;
				cin >> BorrowerOrLibrarian;
			} while (!Checker.IsValid("ERROR, INVALID INPUT"));

			switch (BorrowerOrLibrarian)
			{
			case 1:
				library.showBooks();
				cout << "Welcome Borrower: " << B1.getName() << " " << B1.getLastName() << endl;
				cout << "I'm the Librarian: " << L1.getName() << " " << L1.getLastName() << endl;
				B1.showBooks();
				isBorL = !isBorL;
				break;
			case 2:
				library.showBooks();
				cout << "Welcome Librarian: " << L2.getName() << " " << L2.getLastName() << endl;
				cout << "I'm the Librarian: " << L1.getName() << " " << L1.getLastName() << endl;
				L2.showBooks();
				isBorL = !isBorL;
				break;
			default:
				cout << "Invalid input. Try again" << endl;
				break;
			}
		}
		bool IsExitOrBook = false;
		while (!IsExitOrBook)
		{
			cout << "Enter Q/q to exit or L/l to lend a book or R/r to return a book" << endl;
			char input;
			cin >> input;
			int index;

			switch (input)
			{
			case 'Q':
			case 'q':
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				return 0;
			case 'L':
			case 'l':
				do
				{
					cout << "Enter book's index" << endl;
					cin >> index;
				} while (!Checker.IsValid("ERROR, INVALID INPUT"));
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				if (BorrowerOrLibrarian == 1)
				{
					L1.lendBook(library, B1, index);
					B1.showBooks();
				}
				if (BorrowerOrLibrarian == 2)
				{
					L1.lendBook(library, L2, index);
					L2.showBooks();
				}
					
				IsExitOrBook = true;
				break;
			case 'R':
			case 'r':
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				if (BorrowerOrLibrarian == 1)
				{
					L1.returningBook(library, B1, index);
					B1.showBooks();
				}
					
				if (BorrowerOrLibrarian == 2)
				{
					L1.returningBook(library, L1, index);
					L1.showBooks();
				}
					
				IsExitOrBook = true;
				break;
			default:
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Try again" << endl;
			}
		}
	}
	

	
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

void returningBook(Library&, Librarian&, Librarian&)
{

}
void returningBook(Library&, Librarian&, Borrower&)
{

}