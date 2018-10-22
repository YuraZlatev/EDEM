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
	/* ���-�� ������ */
	unsigned long long count_blocks;
	/* ������� hash ���������� ����� */
	string prev_hash;

	Block curBlock;

public:
	BlockChain_Democracy();

	void CreateBlock(string description, string data);


	~BlockChain_Democracy();
};