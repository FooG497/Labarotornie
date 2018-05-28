#include "Complex.h"

Complex::Complex(){
	u = v = 0;
}

Complex::Complex(double u){
	this->u = u;
	this->v = 0;
}

Complex::Complex(double u, double v){
	this->u = u;
	this->v = v;
}

Complex::Complex(const Complex & c){
	this->u = c.Re();
	this->v = c.Im();
}

string Complex::toString(){
	string res = to_string((long double)u); 
	if (v >= 0)
		res += "+";
	res += to_string((long double)v) + "i";
	return res;
}

double Complex::Re() const{
	return this->u;
}

double Complex::Im() const{
	return this->v;
}

void Complex::Re(double re){
	this->u = re;
}

void Complex::Im(double im){
	this->v = im;
}

double Complex::R() const{
	return sqrt(u*u + v*v);
}

double Complex::Phi() const{
	double res = v/u;
	res = tan(res);
	return res;
}

Complex Complex::operator = (Complex & c) {
	this->u = c.Re();
	this->v = c.Im();
	return *this;
}

Complex::operator double(){
	double res = 0;
	res+= u*u;
	res+= v*(-v);
	return res;
}

Complex Complex::operator-(const Complex c){
	return Complex(this->u - c.u, this->v - c.v);
}

Complex Complex::operator-(){
	Complex c = Complex(-(this->u), -(this->v));
	return c;
}

Complex Complex::operator+(const Complex & c){
	return Complex(this->u + c.u, this->v + c.v);
}

Complex Complex::operator* (const Complex & C){
	return Complex(this->u * C.u - this->v * C.v, this->v * C.u + this->u * C.v);
}

Complex Complex::operator/(const Complex & C){
	Complex temp;
	double r = C.u * C.u + C.v * C.v;
	temp.u = (this->u * C.u + this->v * C.v)/r;
	temp.v = (this->v*C.u - this->u*C.v)/r;
	return temp;
}

Complex Complex::Pow(const Complex & Z, double n){
	double r = pow(Z.R(), n);
	double phi = n*Z.Phi();
	return Complex(r*cos(phi), r*sin(phi));
}

Complex Complex::Exp(const Complex & Z){
	return Complex(exp(Z.Re())*cos(Z.Im()), exp(Z.Re())*sin(Z.Im()));
}

Complex Complex::Sh(const Complex & Z){
	Complex res, c1 = Complex(2), c2 = -Complex(Z);
	res = (Complex::Exp(Z) - Complex::Exp(c2))/c1;
	return res;
}

Complex Complex::Ch(const Complex & Z){
	Complex res, c1 = Complex(2), c2 = -Complex(Z);
	res = (Complex::Exp(Z) + Complex::Exp(c2))/c1;
	return res;
}

Complex Complex::Sin(const Complex & Z){
	Complex res, c1 = Complex(0, 1)*Z, c2 = -c1, c3 = Complex(2) * Complex(0, 1);
	res = (Complex::Exp(c1) - Complex::Exp(c2))/c3;
	return res;
}

Complex Complex::Cos(const Complex & Z){
	Complex res, c1 = Complex(0, 1)*Z, c2 = -c1, c3 = Complex(2);
	res = (Complex::Exp(c1) + Complex::Exp(c2))/c1;
	return res;
}

Complex Complex::y(const Complex & Z){
	Complex res, c1 = Complex(2), c2 = Complex(3)*Complex(0,1), c3 = -Complex(Z);
	res = c1 + c2*Complex::Exp(c3);
	return res;
}