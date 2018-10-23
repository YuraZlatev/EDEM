#pragma once
#include <string>;
#include <stdio.h>;
#include <ctime>;
#include <algorithm>;
#include <functional>;
#include <list>;
#include <iostream>
#include <fstream>
#include <io.h>

#include "SHA256.h"

using namespace std;

class Block
{
private: 
	/* имя блока */
	string blockName;

	string hash;

	/* информация о блоке */
	string description;
	/* время создания блока */
	string createTime;

	string previous_hash;
	string transaction_hash;

	/* информация */
	string data;

	//----Method's--------------------
	string CreateTime();

public:
	Block();
	Block(string prev_hash, string nameOfBlock, string description, string data);


	string GetBlockName();
	string GetDescription();
	string GetPreviousHash();
	string GetHash();
	string GetCreateTime();

	void WriteBlock();

	Block(string blockName, string hash, string description, string createTime, string prev_hash, string transaction_hash, string data);

	void SetBlockInformation(string newDescription);

	~Block();
};

	static void ReadBlock(string path, Block *&temp);