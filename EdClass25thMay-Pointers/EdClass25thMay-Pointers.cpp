// EdClass25thMay-Pointers.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


void dodo(int *);

int main()
{
	int i = 3;

	dodo(&i); // pass the address of i

	cout << i;
	cin.get();
	return 0;
}

void dodo(int* ptri)		// the * here means IS A POINTER	
{
	(*ptri)++;
}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[] = { 4,6,9 };
//	cout << arr[0] << " " << &arr[0] << endl;
//	cout << *arr << " " << arr << endl;
//
//	int* ptr;
//
//	ptr = arr;
//
//	cout << "PTR: " << ptr << endl;
//	ptr++;
//	cout << "PTR: " << ptr << endl;
//	cout << "ptr: " << *ptr << endl;
//
//	cin.get();
//	return 0;
//}


//int main()
//{
//	int i;
//	int* ptr;
//	ptr = &i;
//	*ptr = 5;
//	cout << *ptr << endl;
//	cin.get();
//	return 0;
//}
//

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

