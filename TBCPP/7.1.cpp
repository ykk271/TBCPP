#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
}// x and y are destroyed here

int main()
{
	int x = 1, y = 2;
	
	foo(6, 7); // 6, 7: arguments (acture parameters)
	foo(x, y + 1); 


	return 0;
}