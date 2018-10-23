#include "pch.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <io.h>

#include "Block.h"
#include "BlockChain_Democracy.h"



using namespace std;



static void ReadBlock(string path, Block *&temp)
{
	ifstream is = ifstream(path);

	if (!is.is_open())
	{
		temp = NULL;
	}
	else
	{
		string blockName, hash, description, createTime, prev_hash, transaction_hash, data;
		is >> blockName >> hash >> description >> createTime >> prev_hash >> transaction_hash >> data;

		is.close();

		temp = new Block(blockName, hash, description, createTime, prev_hash, transaction_hash, data);
	}
}



int main()
{
//	setlocale(LC_ALL, "Russian");


//	Block b = Block("0", "name", "simple block", "fuck");


	//int res = _access("file.edem", 0); // res == 0 -> exist, -1 -> not found
/*	cout << res << endl;


	ofstream os = ofstream("file.edem");
	
	char write[] = {'e', 'd', 'e', 'm'};
	os.write(write, sizeof(write));

	os << endl;
	string s = "123";
	os << s;


	os.close();*/

 
	
	
	//---------------------

	/*ifstream is = ifstream("file.edem");

	char mass[10];
	string mass2 = "";

	is >> mass >> mass2;

	cout << mass << endl << mass2 << endl;

	is.close();*/


	Block blockOld = Block("12345", sha256("12345"), "simple block", "2019-10-23 20:24:00", "0", sha256("null"), "null");
	blockOld.WriteBlock();
	
	Block *blockNew = NULL;
	cout << blockNew << endl;
	ReadBlock("12345.edem", blockNew);
	cout << blockNew << endl;

	if (blockNew == NULL)
		cout << "fucking shit" << endl;
	else
	{
		cout << (*blockNew).GetBlockName() << endl << "success read." << endl;
		delete blockNew;
	}


}