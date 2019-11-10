/*
	Nguyen, Michael
	Pham, Hieu

	CS A250
	September 26, 2018

	Project 1A
*/

#include "MemberType.h"

// Default Constructor
MemberType::MemberType() : mNumber(0) {}

// Overloaded Constructor
MemberType::MemberType(const string& newFName, const string& newLName, int newMNumber) 
	: fName(newFName), lName(newLName), mNumber(newMNumber) {}

void MemberType::setMemberInfo(const string& newFName, const string& newLName, int newMNumber) {
	fName = newFName;
	lName = newLName;
	mNumber = newMNumber;
}

string MemberType::getFirstName() const {
	return fName;
}

string MemberType::getLastName() const {
	return lName;
}

int MemberType::getMembershipNo() const {
	return mNumber;
}

void MemberType::printName() const {
	cout << lName << ", " << fName << endl;
}

void MemberType::printMemberInfo() {
	cout << mNumber << "-" << fName << " " << lName << endl;
}

MemberType::~MemberType() {};