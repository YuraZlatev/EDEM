#include "pch.h"
#include "Transaction.h"


Transaction::Transaction(unsigned long long id_person, unsigned long long id_vote, unsigned char res)
{
	this->idPerson = to_string(id_person);
	this->idVote = to_string(id_vote);
	this->result = to_string(res);
	
	string str = this->idPerson + ' ' +  this->idVote + ' ' + this->result;
	this->hash = sha256(str);
}

bool Transaction::ConfirmHash(string hash)
{
	if (this->hash._Equal(hash))
		return true;
	return false;
}

string Transaction::GetTransaction()
{
	string tr = this->idPerson + ' ' + this->idVote + ' ' + this->result + ' ' + this->hash;
	return tr;
}

Transaction::~Transaction()
{
}