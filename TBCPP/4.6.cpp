//���ڿ� �Ұ�

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello, World" << endl;

	const string my_hello = "Hello, World";
	const char my_str[] = "Hello, World";
	cout << my_hello << endl;

	cout << "Your name ? : ";
	string name;
	//cin >> name;// ��ĭ�� ������ �ȴ�
	std::getline(std::cin, name);
	cout << "Your name: " << name << endl;; 

	cout << "Your age ? : ";
	string age;
	cin >> age;
	cout << "Your age: " << age << endl;;
	return 0;

}