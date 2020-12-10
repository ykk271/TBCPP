#include <iostream>

using namespace std;

int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* getValue2(int x)
{
	int value = x * 2;
	return &value;
}


int main()
{
	int value = getValue(3);

	int *value = getValue2(3); // ±ÇÀå¾ÈµÊ
	cout << *value << endl;
	

	//int value 
	return 0;
}