#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

typedef std::vector<std::vector<double> > TwoDArray;

class Matrix {

public:

	Matrix(int m=1, int n=1, double init=0);
	void printMatrix() const;
	double& operator()(int i, int j);
	const double& operator()(int i, int j) const;
	const Matrix operator +(const Matrix& other);

private:
	TwoDArray matrix;


};


#endif //MATRIX_H
