#include <iostream>
using namespace std;

void foo(int* ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;	
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;

	cout << &ptr << endl;
	//주소값 복사 됨
	foo(ptr);
	foo(&value);
	//foo(5); //오류

	return 0;
}