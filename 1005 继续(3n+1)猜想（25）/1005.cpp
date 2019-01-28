#include<iostream>
#include<vector>

using namespace std;
int func(int,vector<int>);

int main() {
	vector<int> numbers,results;
	int size,num;
	cin >> size;
	while (cin >> num) {
		func(num, results);
		for (auto it = results.begin(); it != results.end(); ++it)
			cout << *it;
		
	}
	
	
		numbers.push_back(num);

	return 0;

}

int func(int n, vector<int> results)
{
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