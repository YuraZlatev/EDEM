#pragma once
#include <string>;
#include "SHA256.h";

using namespace std;


class Transaction
{
private:
	string idPerson;
	string idVote;
	string result;

	string hash;

public:
	Transaction(unsigned long long id_person, unsigned long long id_vote, unsigned char res);

	bool ConfirmHash(string hash);
	string GetTransaction();

	~Transaction();
};

