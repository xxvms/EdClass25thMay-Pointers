// EdClass25thMay-Pointers.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
int main()
{
	int i;
	int* ptr;
	ptr = &i;
	*ptr = 5;
	cout << *ptr << endl;
	cin.get();
	return 0;
}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double i = 5;
//	cout << &i << endl;
//	double* p;
//
//	p = &i;
//
//	cout << "P: " << p << endl;
//	cout << "*p: " << *p << endl;
//	p++;
//
//	cout << "P: " << p << endl;
//	cout << "*p: " << *p << endl;
//
//
//	cin.get();
//	return 0;
//}

