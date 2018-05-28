#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

class Complex {
private:
	double u;
	double v;
public:
	Complex();
	Complex(double u);
	Complex(double u, double v);
	Complex(const Complex & c);
	string toString();
	double Re() const;
	double Im() const;
	double R() const;
	double Phi() const;
	void Re(double re);
	void Im(double im);
	Complex operator = (Complex & c);
	operator double();
	Complex operator-(const Complex c);
	Complex operator-();
	Complex operator+(const Complex & c);
	Complex operator*(const Complex & C);
	Complex operator/(const Complex & C);
	static Complex Pow(const Complex & Z, double n);
	static Complex Exp(const Complex & Z);
	static Complex Sh(const Complex & Z);
	static Complex Ch(const Complex & Z);
	static Complex Sin(const Complex & Z);
	static Complex Cos(const Complex & Z);
	static Complex y(const Complex & Z);
};