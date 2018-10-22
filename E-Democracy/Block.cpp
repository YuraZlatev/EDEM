#include "pch.h"
#include "Block.h"


Block::Block()
{
}

Block::Block(string prev_hash, string nameOfBlock, string description, string data)
{
	this->previous_hash = prev_hash;
	this->blockName = nameOfBlock;
	this->description = description;
	this->data = data;
	this->createTime = CreateTime();

	this->transaction_hash = sha256(data);
	
	string str = this->previous_hash + this->blockName + this->description + this->data + this->createTime + this->transaction_hash;
	this->hash = sha256(str);
}


//-------------GET---------------------

string Block::GetBlockName()
{
	return this->blockName;
}
string Block::GetDescription()
{
	return this->description;
}
string Block::CreateTime()
{
	time_t t = time(0);
	struct tm * timeinfo = new tm();
	localtime_s(timeinfo, &t);

	char mass[24];
	strftime(mass, 24, "%Y-%m-%d %H:%M:%S", timeinfo);

	return mass;
}
string Block::GetCreateTime()
{
	return this->createTime;
}
string Block::GetPreviousHash()
{
	return this->previous_hash;
}
string Block::GetHash()
{
	return this->hash;
}
//--------------------------------------


void Block::SetBlockInformation(string newDescription)
{
	this->description = newDescription;
}



Block::~Block()
{
}
