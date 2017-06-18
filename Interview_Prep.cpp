#include<iostream>
using namespace std;

int main(){

	//compile time
	const int size = 20;

	int a1[size];
	int a2[] = {1,2,3,4};
	a1[5] = 10;
	a2[3] = a[2]+a[1]-a[0];


	int *const a1 = &int[size];
	a1 = &int(7);



	//runt time
	int x;
	cin >> x;
	int *p = new int[x];	
	p = new int(4);	

	for(int i = 0; i<x; i++){

		cout << p[i] << endl; 

	}

	delete [] p;
	p = new int[x*2];
			

	string *str = new string("Hello world");
	(*str).length();
	str->length();
//	-> = (* ).
	delete str;



	int y = 7;
	int *p = &y;

	*p = 8;

	cout << *p << endl;


	int a = 1, b = 2, c = 3;
	int* a3[20]; 
	a3[4] = new int(3);
	a3[5] = &a;

	a = 7;
	*a3[5] = 8;

	cout << *a3[5] << endl;

	int* a4[] = {&a, &b, &c};


	int* *p = new int*[x];


	return 0;

}




