#include <iostream>

using namespace std;

int main()
{
	int one_student_score; // 1 variable
	int student_scores[5]; // 5 int

	//cout << sizeof(one_student_score) << endl;
	//cout << sizeof(student_scores) << endl;
	
	one_student_score = 100;

	student_scores[0] = 100;	// 1st element
	student_scores[1] = 99;		// 2nd element
	student_scores[2] = 30;		// 3rd element
	student_scores[3] = 50;		// 4th element
	student_scores[4] = 80;		// 5th element
	student_scores[5] = 80;

	cout << student_scores[5] << endl;

	return 0;
}