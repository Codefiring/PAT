#include<iostream>
#include<string>
#define Maxnum 100
using namespace std;

int main() {
	int number;
	struct student {
		string name;
		string id;
		int grade = 0;
	};
	student students[Maxnum];

	cin >> number;
	//cout << number <<endl;

	for (int i=0; i < number; i++)
	{
		cin >> students[i].name >> students[i].id >>students[i].grade;
		//cout << students[i].name <<" "<< students[i].id <<" "<< students[i].number << endl;
	}
	student max_stu = students[0], min_stu = students[0];

	for (int i = 1; i < number; i++)
	{
		if (max_stu.grade < students[i].grade)
			max_stu = students[i];
		else if (min_stu.grade > students[i].grade)
			min_stu = students[i];
		else
			break;
	}
	cout << max_stu.name << " " << max_stu.id << endl;
	cout << min_stu.name << " " << min_stu.id << endl;
	return 0;
}