#pragma once
#include <iostream>
using namespace std;

class User
{
public:
	User(string, string);
	~User();
	string getName() { return this->name; }
	void setName(string name) { this->name = name; }
	string getLastName(){ return this->lastName; };
	void setLastname(string lastName) { this->lastName = lastName; }

private:
	string name;
	string lastName;
};

User::User(string name, string lastName)
{
	this->name = name;
	this->lastName = lastName;
}

User::~User()
{
}