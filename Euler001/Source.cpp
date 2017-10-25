#include <iostream>


using namespace std;


int main() {

	int t, tot = 0;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++)
	{
		int n;
		cin >> n;
		n = n - 1;
		int b = n, c = n, d = n;

		while (b % 3)
			b--;
		while (c % 5)
			c--;
		while (d % 15)
			d--;


		tot = 0;
		b = b / 3;
		c = c / 5;
		d = d / 15;
		tot = 3 * b*(b + 1) / 2 + 5 * c*(c + 1) / 2 - 15 * d*(d + 1) / 2;

		cout << tot << '\n';
	}
	return 0;
}
