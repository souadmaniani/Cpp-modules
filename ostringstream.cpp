#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	ostringstream s1;
	int i = 22;
	s1 << "Hello " << i << endl;
	string s2 = s1.str();
	cout << s1;
}