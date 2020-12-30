#include <iostream>
#include <string>
#include <vector>

int main()
{
	//std::string mt_string("my string");
	//const char* my_string = "my string";

	std::vector<char> vec;
	for (auto e : "To day is good day.")
		vec.push_back(e);

	std::string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'y'));

	std::cout << second_string << std::endl;

	return 0;
}