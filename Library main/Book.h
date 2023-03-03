#pragma once
#include <string>

using namespace std;

/// <summary>
/// 
/// </summary>
class Book
{
private:
	string title;
	string author;
	string year;
	mutable int bookID;
	static int counter;				//Static member, only one copy is shared between all created objects
	void setBookID() const;
	void setCounter() const;

public:
	Book();							//Constructor
	Book(const Book & obj);			//Copy Constructor
	Book(string, string, string);	//Overload Constructor
	~Book();						//Destructor
	//void display() const;			//const key word at the end of the fuction means it can be invoked by const objects
	int getBookID() const;
	static int getCounter();		//Static method is use to access static members

	friend ostream& operator<<(ostream&, const Book&);
	friend class Library;			//Friends fuctions and classes have access to the private variables of an object
									//but they are define outside the class
};