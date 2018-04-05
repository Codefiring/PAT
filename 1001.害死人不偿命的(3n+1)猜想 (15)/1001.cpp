#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int count = 0;
	while (n <= 1000 && n > 0)
	{
		while (n != 1) {
			count = count + 1;
			if (n % 2)
				n = (3 * n + 1) / 2;
			else
				n = n / 2;
		};
		cout << count << endl;
		return 0;
	}
	return 0;
}