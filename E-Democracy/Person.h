#pragma once
#include <string>;
#include <ctime>;
#include "Marriage.h";
#include "Place.h";

using namespace std;

class Person
{
private:
	static unsigned long long countOfIdPerson;
	//unchangeable
	unsigned long long idPerson; // уникальный идентификатор
	bool sex;
	time_t birthday;
	Place placeOfBirth;
	unsigned long long idMother;
	unsigned long long idFather;
	//changeable
	bool isAlive;
	string surname; //Фамилия
	string name; //Имя
	string middleName; //Отчество
	//added later
	bool citizenship;
	Marriage marriage;
	Place placeOfLive;
	unsigned long long identityCode; //10 цифр

public:
	Person(bool sex, time_t birthday, string surname, string name, string middleName, Place placeOfBirth, unsigned long long idMother, unsigned long long idFather);
	bool ResetIsAlive();
	void SetSurname(string surname);
	void SetName(string name);
	void SetMiddleName(string middleName);
	bool SetCitizenship();
	bool ResetCitizenship();
	bool SetMarriage(unsigned long long idSpouse);
	bool ResetMarriage();
	bool SetPlaceOfLive(Place placeOfLive);
	bool ResetPlaceOfLive();
	bool SetIdentityCode(unsigned long long identityCode);
	~Person();
};