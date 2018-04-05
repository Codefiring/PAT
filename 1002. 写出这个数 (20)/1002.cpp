#include<iostream>
#include<string>
using namespace std;

#define Maxsize 100;

int main()
{
	char data;
	int number[100] = { 0 }, sum = 0;
	int index = 0;
	int sum_number[4] = { 0 };

	while (cin>>data)
	{
		sum = sum + (int)data;
	}
	for (int i = 0; i < 100; i++)sum = sum + number[i];
	while (sum) {
		sum_number[index++] = sum % 10;
		sum = sum / 10;
	}
	
	return 0;
}