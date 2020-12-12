#include <iostream>
#include <array>

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

int& getValue3(int x)
{
	int value = x * 2;
	return value;
}

int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}


int* allocateMomory(int size)
{
	return new int[size];
}



int main()
{
	//int value = getValue(3);

	//int *value = getValue2(3); // 권장안됨
	//cout << *value << endl;

	int* array = new int[1024];
	delete[] array;

	int& value = getValue3(5); //좋지 못한 사용
	cout << value << endl;
	cout << value << endl; // 두번째때 문제가 생김

	std::array<int, 100> my_array;
	my_array[30] = 10;
	get(my_array, 30) = 1024;
	cout << my_array[30] << endl;

	return 0;
}