#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int num, int denom) {

	if(denom == 0){

		std::cout << "ERROR: DENOMINATOR CANNOT EQUAL 0, VALUES SET TO 1" << std::endl;
		num = 1;
		denom = 1;

	}


	numerator_u = num;
	numerator = num;
	denominator_u = denom;
	denominator = denom;
	decimal = (double)num/denom;
	
	if(num < 0 && denom < 0){
		numerator = -num;
		denominator = -denom;
	}

	if(num >= 0 && denom < 0){
		numerator = -num;		
		denominator = -denom;
	}

	
}

Fraction Fraction::reducedform() {
	
	if(numerator == denominator){
	
		return Fraction();
	
	}	

	int a = 0;
	int b = 0;
	
	if(numerator > denominator){
		a = numerator;
		b = denominator; 

	}

	else{

		a = denominator;
		b = numerator;
	}

	int gcdcalc = gcd(a,b);
	
	return 	Fraction(numerator/gcdcalc, denominator/gcdcalc);
	
}

void Fraction::reduceself() {

	Fraction temp =	reducedform();
	numerator = temp.numerator;	
	denominator = temp.denominator;

}

int Fraction::getnumerator() {
	return numerator;
}

int Fraction::getdenominator() {
	return denominator;
}

double Fraction::getdecimal() {
	return decimal;
}

int Fraction::gcd(int a, int b) {	
	

	if(b == 0)
	{
	        return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

int Fraction::lcm(Fraction other) {
	//std:: cout << "LCM REPORT: " << std:: endl;
	//std:: cout << numerator << std:: endl;
	//std:: cout << denominator << std:: endl;
	//std:: cout << other.numerator << std:: endl;
	//std:: cout << other.denominator << std:: endl;
	
	if(denominator == other.denominator){
		//std:: cout << "if == " << std:: endl;
		return denominator;
	}

	int a = 0;
	int b = 0;
	
	if(denominator > other.denominator){
		//std:: cout << "if > " << std:: endl;
		a = denominator;
		b = other.denominator; 

	}

	else{
		//std:: cout << "else < " << std:: endl;
		a = denominator;
		b = other.denominator;
	}
	return (a*b)/gcd(a, b); 

}

const Fraction Fraction::operator +(const Fraction& other){
	//std:: cout << "REPORT: " << std:: endl;
	//std:: cout << numerator << std:: endl;
	//std:: cout << denominator << std:: endl;
	//std:: cout << other.numerator << std:: endl;
	//std:: cout << other.denominator << std:: endl;
	
	if(denominator == other.denominator){
		std::cout<< "It's me, not you" << std::endl;
		//std:: cout << "Hello from the other side " << std:: endl;
		return Fraction(numerator + other.numerator, denominator);
	}

	else{
		std::cout<< "bingo" << std::endl;
		int a = lcm(other);
		
		int numerator_copy = numerator*(a/denominator);
		//std:: cout << "numerator_copy = " << numerator_copy << std:: endl;
		int b = other.numerator*(a/other.denominator);
		//std:: cout << "b = " << b << std:: endl;
		return Fraction(numerator_copy + b, a);

	}	
	
}

const Fraction Fraction::operator -(const Fraction& other){

	if(denominator == other.denominator){
		std::cout<< "It's me, not you" << std::endl;
		
		return Fraction(numerator - other.numerator, denominator);

	}


	else {
		
		int c = lcm(other);
		
		int numerator_copy = numerator*(c/denominator);
		
		int d = other.numerator*(c/other.denominator);
				
		return Fraction(numerator_copy - d, c);

	}


}

const Fraction Fraction::operator *(const Fraction& other){

	int numerator_copy = numerator*other.numerator;

	int denominator_copy = denominator*other.denominator;

	return Fraction(numerator_copy, denominator_copy);

}


const Fraction Fraction::operator /(const Fraction& other){

	int numerator_copy = numerator*other.denominator;

	int denominator_copy = denominator*other.numerator;

	return Fraction(numerator_copy, denominator_copy);

}


