#include "pch.h"
#include "BlockChain_Democracy.h"


BlockChain_Democracy::BlockChain_Democracy()
{
	this->count_blocks = 0;	
	this->curBlock = Block("BlockChain", to_string(count_blocks++), "Genesis block", "");
	this->prev_hash = curBlock.GetHash();
}


void BlockChain_Democracy::CreateBlock(string description, string data)
{
	this->curBlock = Block(this->prev_hash, to_string(this->count_blocks++), description, data);
}



BlockChain_Democracy::~BlockChain_Democracy()
{
}
