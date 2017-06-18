#include <iostream>
#include "Matrix.h"

int main(){

	Matrix a;
	Matrix b(6);
	Matrix c(3,3);
	Matrix d(3,3, 3.14);

	a.printMatrix();
	b.printMatrix();
	c.printMatrix();
	d.printMatrix();


	Matrix e(5,5);

		for(int i = 0; i < 5; i++){

			for(int j = 0; j < 5; j++){

				e(i,j) = i+j;

			}

		}

	e.printMatrix();


return 0;

}
