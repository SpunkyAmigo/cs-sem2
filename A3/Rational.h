#ifndef RATIONAL_H_
#define RATIONAL_H_
#include <iostream>
#include <string>
using namespace std;

class Rational {
public:
	Rational(int,int);
	Rational(const Rational &copy);// copy constructor to initialize the Rational form existing Rational //object
	// Binary Operators
	// Assignment Operator
	Rational operator = (const Rational &x);
	// Arithmetic Operators
	Rational operator+(const Rational &x) const;
	Rational operator-(const Rational &x) const;
	Rational operator*(const Rational &x) const;
	Rational operator/(const Rational &x) const;
	// Compound Arithmetic Operators
	Rational operator += (const Rational &x);
	Rational operator -= (const Rational &x);
	Rational operator *= (const Rational &x);
	Rational operator /= (const Rational &x);
	// Logical Operators
	bool operator == (const Rational & other) const;
	bool operator < (const Rational & other) const;
	bool operator > (const Rational & other) const;
	bool operator <= (const Rational & other) const;
	bool operator >= (const Rational & other) const;

	// Unary Operator
	// Conversion Operator
	operator string() const; // returns 2/3 as �2/3�. If the denominator is 1 then only the numerator is returned, i.e. for 2/1 the operator shall return �2�
	~Rational(); // destructor
};

// Operator Overloading as Non-Member Functions
// Stream Insertion and Extraction Operators
ostream& operator<<(ostream& output, const Rational &); 	// outputs the Rational
istream& operator>>(istream& input, Rational&); 	// inputs the Rational


#endif /* RATIONAL_H_ */
