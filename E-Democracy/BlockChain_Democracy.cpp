#include "pch.h"
#include "BlockChain_Democracy.h"
#include "SHA256.h"

BlockChain_Democracy::BlockChain_Democracy(string nameOfBlockChain, string path) {
	this->nameOfBlockChain = nameOfBlockChain;
	this->path = path;
	this->count_blocks = 0;	
	this->curBlock = Block(to_string(count_blocks++), "Genesis Block of " + this->nameOfBlockChain, sha256(this->nameOfBlockChain), "");
	this->prev_hash = curBlock.GetHash();
	this->curBlock.WriteBlock(this->path);
}

BlockChain_Democracy::~BlockChain_Democracy() {}

string BlockChain_Democracy::GetPath() {
	return path;
}

Block BlockChain_Democracy::GetBlock(unsigned long long number) {
	Block *temp = NULL;
	this->curBlock.ReadBlock(this->GetPath(), to_string(number), temp);
	return *temp;
}

void BlockChain_Democracy::CreateBlock(string description, string data) {
	this->curBlock = Block(to_string(this->count_blocks++), description, this->prev_hash, data);
	this->prev_hash = curBlock.GetHash();
	this->curBlock.WriteBlock(this->path);
}

void BlockChain_Democracy::ShowBlock(unsigned long long number) {
	Block *temp = NULL;
	this->curBlock.ReadBlock(this->GetPath(), to_string(number), temp);
	if (temp == NULL)
		cout << "Block didn`t read!" << endl;
	else cout << (*temp).GetBlock() << endl << "Success read!" << endl;
	delete temp;
}

void BlockChain_Democracy::VerifyBlock(unsigned long long number) {
	Block block = this->GetBlock(number);
	block.ShowBlock();
	string readHash = block.GetHash();
	cout << endl << readHash << endl;
	string calcHash = sha256(block.GetBlockWithoutHash());
	cout << calcHash << endl;
	if (readHash == calcHash)
		cout << "Right Block" << endl;
	else cout << "Wrong Block" << endl;
}