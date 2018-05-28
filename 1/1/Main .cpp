#include "Complex.h"

using namespace std;

int main(int argn, char ** args){
	setlocale(LC_ALL, "rus");
	Complex c = Complex(2, 2);
	cout << Complex::Exp(c).toString() << endl;
	cout << Complex::Pow(c, 2).toString() << endl;
	cout << Complex::Sh(c).toString() << endl;
	cout << Complex::Ch(c).toString() << endl;
	cout << Complex::Sin(c).toString() << endl;
	cout << Complex::Cos(c).toString() << endl;
	cout << Complex::y(c).toString() << endl;
	system("Pause");
	return 0;
}