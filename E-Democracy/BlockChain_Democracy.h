#pragma once

#include <string>;
#include <time.h>;
#include <list>;
#include <functional>;
#include <algorithm>;

#include "Block.h";

using namespace std;

class BlockChain_Democracy
{
private:
	string nameOfBlockChain;
	string path;

	unsigned long long count_blocks;

	Block curBlock;
	string prev_hash;

public:
	BlockChain_Democracy(string nameOfBlockChain,string path);
	~BlockChain_Democracy();

	string GetPath();
	Block GetBlock(unsigned long long number);

	void CreateBlock(string description, string data);
	void ShowBlock(unsigned long long number);
	void VerifyBlock(unsigned long long number);
};