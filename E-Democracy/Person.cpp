#include "pch.h"
#include "Person.h"

unsigned long long Person::countOfIdPerson = 0;

Person::Person(bool sex, time_t birthday, string surname, string name, string middleName, Place placeOfBirth, unsigned long long idMother, unsigned long long idFather)
{
	this->idPerson = ++countOfIdPerson;
	this->isAlive = true;
	this->sex = sex;
	this->birthday = birthday;
	this->surname = surname;
	this->name = name;
	this->middleName = middleName;
	this->placeOfBirth = placeOfBirth;
	this->idMother = idMother;
	this->idFather = idFather;

	this->citizenship = false;
	this->marriage = Marriage();
	this->placeOfLive = Place();
	this->identityCode = 0;
}

bool Person::ResetIsAlive() {
	if (!this->isAlive) return false;
	this->isAlive = false;
	return true;
}

void Person::SetSurname(string surname) {
	this->surname = surname;
}

void Person::SetName(string name) {
	this->name = name;
}

void Person::SetMiddleName(string middleName) {
	this->middleName = middleName;
}

bool Person::SetCitizenship() {
	if (this->citizenship) return false;
	this->citizenship = true;
	return true;
}

bool Person::ResetCitizenship() {
	if (!this->citizenship) return false;
	this->citizenship = false;
	return true;
}

bool Person::SetMarriage(unsigned long long idSpouse) {
	if (this->marriage.GetIsMarried()) return false;
	this->marriage.SetIsMarried(true);
	this->marriage.SetIdSpouse(idSpouse);
	return true;
}

bool Person::ResetMarriage() {
	if (!this->marriage.GetIsMarried()) return false;
	this->marriage.SetIsMarried(false);
	this->marriage.SetIdSpouse(0);
	return true;
}

bool Person::SetIdentityCode(unsigned long long identityCode) {
	if (this->identityCode != 0) return false;
	this->identityCode = identityCode;
	return true;
}

bool Person::SetPlaceOfLive(Place placeOfLive) {
	if (this->placeOfLive.EqualPlace(placeOfLive)) return false;
	this->placeOfLive = placeOfLive;
	return true;
}

bool Person::ResetPlaceOfLive() {
	Place p = Place();
	if(this->placeOfLive.EqualPlace(p)) return false;
	return true;
}

Person::~Person()
{
}