#pragma once
#include <iostream>
using namespace std;

class User
{
public:
	User(string, string);
	~User();
	inline string getName() { return this->name; }
	inline void setName(string name) { this->name = name; }
	inline string getLastName(){ return this->lastName; };
	inline void setLastName(string lastName) { this->lastName = lastName; }

private:
	string name;
	string lastName;
};