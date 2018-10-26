#include "pch.h"
#include "Block.h"

Block::Block() {}

Block::Block(string arr[]) {
	this->blockName = arr[0];
	this->hash = arr[1];
	this->description = arr[2];
	this->createTime = arr[3];
	this->previous_hash = arr[4];
	this->transaction_hash = arr[5];
	this->data = arr[6];
}

Block::Block(string blockName, string description, string prev_hash, string data) {
	this->blockName = blockName;
	this->description = description;
	this->createTime = getTime();
	this->previous_hash = prev_hash;
	this->data = data;
	this->transaction_hash = sha256(data);
	this->hash = sha256(this->blockName +
		this->description +
		this->createTime +
		this->previous_hash +
		this->transaction_hash +
		this->data);
}

Block::Block(string blockName, string hash, string description, string createTime, string prev_hash, string transaction_hash, string data) {
	this->blockName = blockName;
	this->hash = hash;
	this->description = description;
	this->createTime = createTime;
	this->previous_hash = prev_hash;
	this->transaction_hash = transaction_hash;
	this->data = data;
}

Block::~Block() {}

string Block::GetBlockName() {
	return this->blockName;
}

string Block::GetHash() {
	return this->hash;
}

string Block::GetDescription() {
	return this->description;
}

string Block::GetCreateTime() {
	return this->createTime;
}

string Block::GetPreviousHash() {
	return this->previous_hash;
}

string Block::GetTransactionHash() {
	return this->transaction_hash;
}

string Block::GetData() {
	return this->data;
}

string Block::GetBlock() {
	return GetBlockName() + 
		GetHash() + 
		GetDescription() +
		GetCreateTime() +
		GetPreviousHash() +
		GetTransactionHash() +
		GetData();
}

string Block::GetBlockWithoutHash() {
	return GetBlockName() + 
		GetDescription() +
		GetCreateTime() +
		GetPreviousHash() +
		GetTransactionHash() +
		GetData();
}

void Block::WriteBlock(string path) {
	ofstream os = ofstream(path + this->blockName + ".edem");
	os << this->blockName << endl;
	os << this->hash << endl;
	os << this->description << endl;
	os << this->createTime << endl;
	os << this->previous_hash << endl;
	os << this->transaction_hash << endl;
	os << this->data << endl;
	os.close();
}

void Block::ReadBlock(string path, string name, Block *&temp) {
	ifstream is = ifstream(path + name + ".edem");
	if (!is.is_open())
		temp = NULL;
	else {
		string arr[7];
		for (int i = 0; i < 7; i++)
			getline(is, arr[i]);
		is.close();
		temp = new Block(arr);
	}
}

void Block::ShowBlock() {
	cout << GetBlockName() << endl <<
		GetHash() << endl <<
		GetDescription() << endl <<
		GetCreateTime() << endl <<
		GetPreviousHash() << endl <<
		GetTransactionHash() << endl <<
		GetData() << endl;
}

void Block::SetBlockInformation(string newDescription) {
	this->description = newDescription;
}

string Block::getTime() {
	time_t t = time(0);
	struct tm * timeinfo = new tm();
	localtime_s(timeinfo, &t);
	char mass[24];
	strftime(mass, 24, "%Y-%m-%d %H:%M:%S", timeinfo);
	return mass;
}