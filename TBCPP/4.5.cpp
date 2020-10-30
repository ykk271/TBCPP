#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;

	int a = 123.0;

	cout << typeid(4.0).name() << endl;
	cout << typeid(4).name() << endl;
	cout << typeid(a).name() << endl;

	return 0;
}
