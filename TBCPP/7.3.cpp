#include <iostream>

using namespace std;

void addOne(int& y)
{
	y++;
	cout << y << " " << &y << endl;
}

int main()
{
	int x = 5;

	cout << x << " " << &x << endl;
	addOne(x);
	cout << x << " " << &x << endl;

	return 0;
}