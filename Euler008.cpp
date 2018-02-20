#include <iostream>
#include <string>

using namespace std;

int intify(char a)
{
	return a - 48;
}

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		int k;
		int max = 0;
		int product = 1;
		cin >> n >> k;
		string num;
		cin >> num;
		for (int i = 0; i<num.length() - k; i++)
		{
			for (int j = 0; j<k; j++)
				product *= intify(num[i + j]);
			if (product>max) max = product;
			product = 1;
		}
		cout << max << '\n';
	}
	return 0;
}