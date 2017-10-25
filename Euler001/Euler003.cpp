#include <iostream>

using namespace std;

int main() {
	long t, largest;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {

		long n, a = 1, i;
		cin >> n;
		while (a*a<n)
			a++;
		while (!(n % 2))
			n = n / 2;
		if (n == 1)
		{
			cout << "2" << '\n';
			continue;
		}
		for (i = 3; i <= a; i += 2)
		{
			while (!(n%i))
			{
				n = n / i;
				if (n == 1)
				{
					cout << i << '\n';
				}
			}
		}
		if (n>2) cout << n << '\n';
	}
	return 0;
}