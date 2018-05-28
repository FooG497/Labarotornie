#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "SEQueue.h"
#include "TCQueue.h"
#include "Array.h";
#include "Client.h"

using namespace std;

int main(int argn, char ** argc){
	setlocale(LC_ALL, "rus");
	SEQueue sq = SEQueue();
	TCQueue tq = TCQueue();
	Array aq = Array();
	Client clt[3];
	clt[0].setStorage(&sq);
	clt[1].setStorage(&tq);
	clt[2].setStorage(&aq);
	for (int i = 0; i < 10; i++){
		clt[0].Push(i);
		clt[1].Push(i*2);
		clt[2].Push(i*3);
	}
	cout << clt[0].getCount() << "\t\t" << clt[1].getCount() << "\t\t" << clt[2].getCount() << endl;
	cout << endl;

	for (int i = 0; i < 10; i++){
		cout << clt[0].Pop() << "\t\t" << clt[1].Pop() << "\t\t" << clt[2].Pop() << endl;
	}
	system("Pause");
	return 0;
}