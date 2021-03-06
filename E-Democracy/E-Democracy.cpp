#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <io.h>
#include <windows.h>

#include "pch.h"
#include "Block.h"
#include "BlockChain_Democracy.h"
#include "Person.h"

using namespace std;

int main()
{
	BlockChain_Democracy blockchain = BlockChain_Democracy("Person", "D:/Edem/");

	string description = "Block of Person";
	Place place = Place("Ukraine", "Zaporiz`ka oblast`", "Zaporizhya", "Voznesenivs`kui", "12 April", "23", "11", "");
	bool sex = true;
	string birthday = Block::getTime();
	string name = "Dmitrii";
	string surname = "Zlat`ev";
	string middlename = "Oleksandrovich";
	unsigned long long idm = 00000000;
	unsigned long long idf = 11111111;
	Person p = Person(sex, birthday, name, surname, middlename, place, idm, idf);
	string data = p.PersonToString();

	/*
	unsigned int start_time, end_time;
	start_time = clock();
	end_time = clock();
	cout << "Time = " << end_time - start_time << " ms" << endl;
	*/

	/*
	for(long i=0; i<2; i++) {
		blockchain.CreateBlock(description, data);
		cout << "Block #"<<i<<" is created" << endl;
		//Sleep(1000);
	}
	*/
	blockchain.VerifyBlock(1);
}