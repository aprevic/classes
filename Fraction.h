#ifndef FRACTION_H
#define FRACTION_H

class Fraction{

public:
	Fraction(int num=1, int denom=1); //calculate decimal value
	
	Fraction reducedform();
	void reduceself();
	int getnumerator();
	int getdenominator();
	double getdecimal();

	int gcd(int a, int b);
	int lcm(Fraction other);

	const Fraction operator +(const Fraction& other);
	const Fraction operator -(const Fraction& other);
	const Fraction operator *(const Fraction& other);
	const Fraction operator /(const Fraction& other);
/*

+, -, *, /
>, <, <=, >=, ==, !=
cin, cout
unary -

*/




private:
	int numerator;
	int numerator_u;
	int denominator;
	int denominator_u;
	double decimal;
	
	

};




#endif //FRACTION_H

