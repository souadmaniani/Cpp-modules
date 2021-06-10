#include <iostream>
using namespace std;
int main()
{
    int i = 3; 

	int *ptr = &i; 
	int &ref = i;
	cout << "----------------------"<< "\n";
	cout << "@i  : " << &i << "\n";
	cout << "@ptr: " << &ptr << "\n";
	cout << "@ref: " << &ref << "\n";
	cout << "----------------------"<< "\n";
	cout << "i  : " << i << "\n";
	cout << "ptr: " << ptr << "\n";
	cout << "ref: " << ref << "\n";	
	// https://www.geeksforgeeks.org/pointers-vs-references-cpp/
}