#include "pch.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <io.h>

#include "Block.h"
#include "BlockChain_Democracy.h"



using namespace std;

int main()
{
//	setlocale(LC_ALL, "Russian");


//	Block b = Block("0", "name", "simple block", "fuck");


	int res = _access("file.edem", 0); // res == 0 -> exist, -1 -> not found
	cout << res << endl;


/*	ofstream os = ofstream("file.edem");
	

	char write[10] = {'e', 'd', 'e', 'm'};
	os.write(write, 10);

	os.close();*/
	
	//---------------------

/*	ifstream is = ifstream("file.edem");

	char mass[10] = {0};
	is.read(mass, 10);

	cout << mass << endl;

	is.close();*/


}