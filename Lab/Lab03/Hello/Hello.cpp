#include <iostream>
#include <cstring>
#include <string>
using namespace std;

ostream& operator<<(ostream& os, const char* str)
{
	os << (string)"Entering the Hello program saying...";
	cout << endl;
	for (int i = 0; i < strlen(str); i++)
		os << str[i];
	os << (string)"Then existing...";
	return os;
}
int main()
{
	cout << "Hello, world.\n";
	return 0;
}