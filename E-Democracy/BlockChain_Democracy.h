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
	/* кол-во блоков */
	unsigned long long count_blocks;
	/* текущий hash последнего блока */
	string prev_hash;

	Block curBlock;

public:
	BlockChain_Democracy();

	void CreateBlock(string description, string data);


	~BlockChain_Democracy();
};