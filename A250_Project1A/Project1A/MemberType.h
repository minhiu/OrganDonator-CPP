/*
	Nguyen, Michael
	Pham, Hieu

	CS A250
	September 26, 2018

	Project 1A
*/

#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include<iostream>
#include<string>
using namespace std;

class MemberType {
public:
	MemberType(); // Default Constructor

	MemberType(const string& newFName, const string& newLName, int newMNumber); // Overloaded Constructor

	void setMemberInfo(const string& newFName, const string& newLName, int newMNumber);

	string getFirstName() const;

	string getLastName() const;

	int getMembershipNo() const;

	void printName() const;

	void printMemberInfo();

	~MemberType();

private:
	string fName;
	string lName;
	int mNumber;
};

#endif