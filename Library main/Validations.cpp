#include "Validations.h"

using namespace std;

bool Validation::IsValid(string errorMessage)
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << errorMessage << endl;
		return false;
	}
	return true;
}

void Validation::ValBookIndex(int index)
{

}

void Validation::ValExitOrBook(char input)
{

}