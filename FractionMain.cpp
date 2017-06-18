#include<iostream>
#include "Fraction.h"

void printF(Fraction x){

	std::cout << x.getnumerator() << " / " << x.getdenominator()
				<< '\t' << x.getdecimal() << std::endl;

}


int main(){

	/*Fraction a;
	printF(a);
	Fraction b(3);
	printF(b);
	Fraction c(3,4);
	printF(c);
	Fraction d(-1,0);
	printF(d);
	Fraction e(5,6);
	printF(e);
	Fraction f(-1,-1);
	printF(f);
	Fraction g(50,100);
	printF(g);

	Fraction h = g.reducedform();
	printF(h);

	g.reduceself();
	printF(g);*/


	Fraction i(1,3);
	Fraction j(1,6);
	//printF(i);
	//printF(j);
	//std::cout<< j.lcm(i) << std::endl;
	Fraction k;
	k = i / j;
	//std::cout<< k.getnumerator() << " " << k.getdenominator() << std:: endl;
	printF(k);
	
	return 0;

}
