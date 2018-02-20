#include <iostream>

using namespace std;

int main() {
	int t, last = 1;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		last = 1;
		cin >> n;
		for (int i = 2; i <= n; i++)
			if (last%i)
				for (int j = 2; j <= i; j++)
					if (!((last*j) % i))
					{
						last = last*j;
						break;
					}
		cout << last << '\n';
	}
	return 0;
}