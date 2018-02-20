#include <iostream>
#include <cmath>

using namespace std;

long getsum(long n)
{
	return n*(n + 1) / 2;
}

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		long total = 0;
		for (int i = 1; i <= n; i++)
		{
			total += i*i;
		}
		cout << abs(total - getsum(n)*getsum(n)) << '\n';
	}
	return 0;
}