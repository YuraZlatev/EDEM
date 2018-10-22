#pragma once
#include <string>;
#include <stdio.h>;
#include <ctime>;
#include <algorithm>;
#include <functional>;
#include <list>;
#include <iostream>

#include "SHA256.h"

using namespace std;

class Block
{
private: 
	/* ��� ����� */
	string blockName;
	/* ���������� � ����� */
	string description;
	/* ����� �������� ����� */
	string createTime;

	string transaction_hash;
	string previous_hash;
	string hash;

	/* ���������� */
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


	void SetBlockInformation(string newDescription);

	~Block();
};

