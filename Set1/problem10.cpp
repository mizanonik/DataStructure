#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <list>
using namespace std;

main()
{
	ofstream writeFile;
	writeFile.open("RAND.DAT");
	for(int i = 0; i<100; i++){
        writeFile << rand() << endl;
	}
	writeFile.close();

    list<int> numberList;
    list<int> :: iterator it;

    ifstream readFile;
    readFile.open("RAND.DAT");
    while(readFile.good()){
        float number;
        readFile >> number;
        numberList.push_back(number);
    }

    for(it = numberList.begin(); it!= numberList.end(); it++){
        cout << *it << endl;
    }
}
