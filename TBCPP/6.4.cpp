#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{	
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	/*			value   index
	3 5 2 1 4	  
	1 5 2 3 4
	1 2 5 3 4
	1 2 3 5 4
	1 2 3 4 5	
	*/

	const int length = 5;
	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array, length);



	return 0;
}