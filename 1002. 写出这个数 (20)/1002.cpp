#include<iostream>
#include<string>
using namespace std;

#define Maxsize 100;

int main()
{
	string s;
	cin>>s;
	int sum = 0;
	for(int i = 0;i<s.length();i++)
	{
		sum = sum + (s[i]-'0');
	}
	string num = to_string(sum);

	string str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for(int i = 0;i<num.length();i++)
	{
		if(i!=0)
			cout<<" ";
		cout<<str[num[i]-'0'];
	}
	return 0;
}