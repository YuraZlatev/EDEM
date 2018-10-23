#include "pch.h"
#include "Marriage.h"

Marriage::Marriage()
{
	isMarried = false;
	idSpouse = 0;
}

bool Marriage::GetIsMarried() {
	return this->isMarried;
}

unsigned long long Marriage::GetIdSpouse() {
	return this->idSpouse;
}

void Marriage::SetIsMarried(bool isMarried) {
	this->isMarried = isMarried;
}

void Marriage::SetIdSpouse(unsigned long long idSpouse) {
	this->idSpouse = idSpouse;
}

Marriage::~Marriage()
{
}