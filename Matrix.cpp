#include "Matrix.h"
#include <iostream> 
#include <vector>

Matrix::Matrix(int m, int n, double init){

	matrix = TwoDArray(m);
	
	for(int i = 0; i < m; i++){

		matrix[i] = std::vector<double>(n, init);
	}
	
	
}

void Matrix::printMatrix() const {

	for(int i = 0; i < matrix.size(); i++){

		for(int j = 0; j < matrix[i].size(); j++){

			std::cout << (i,j) << " , ";
		
		}		
	
			std::cout << std::endl;
		
	}

	std::cout << std::endl;
}

double& Matrix::operator()(int i, int j){


	return matrix[i][j];

}


const double& Matrix::operator()(int i, int j) const {


	return matrix[i][j];

}

/*

WILL NEED TO WORK ON A CHECKING CONDITION FOR WHEN THE MATRICES CAN BE ADDED TOGETHER FIRST, AND THEN MOVE ON
const Matrix Matrix::operator (const Fraction& other){


	for(int i = 0;, i < matrix.size(); i++)


}
*/
