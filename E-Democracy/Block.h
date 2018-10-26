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
	string blockName;
	string hash;
	string description;
	string createTime;
	string previous_hash;
	string transaction_hash;
	string data;

public:
	Block();
	Block(string arr[]);
	Block(string blockName, string description, string prev_hash, string data);
	Block(string blockName, string hash, string description, string createTime, string prev_hash, string transaction_hash, string data);
	~Block();

	string GetBlockName();
	string GetHash();
	string GetDescription();
	string GetCreateTime();
	string GetPreviousHash();
	string GetTransactionHash();
	string GetData();
	string GetBlock();
	string GetBlockWithoutHash();

	void WriteBlock(string path);
	void ReadBlock(string path, string name, Block *&temp);
	void ShowBlock();

	void SetBlockInformation(string newDescription);

	static string getTime();
};