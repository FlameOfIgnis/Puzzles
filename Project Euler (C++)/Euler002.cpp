
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		long n;
		long tot = 0;
		cin >> n;
		long t1 = 1, t2 = 1, temp;
		while (true)
		{
			temp = t1;
			t1 = t2;
			t2 = t2 + temp;
			if (t2>n) break;
			if (!(t2 % 2)) tot += t2;
		}

		cout << tot << '\n';

	}
	return 0;
}
