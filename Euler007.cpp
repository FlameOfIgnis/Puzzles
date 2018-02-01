#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		int c = 0;
		bool BinString[n * 11];
		unsigned int maxNum = n * 11;
		BinString[0] = 0;
		BinString[1] = 0;
		for (unsigned int a = 2; a <= maxNum; a++)
		{
			BinString[a] = 1;
		}
		//loop and remove logic
		for (unsigned int b = 2; b < maxNum; b++)
		{
			int limit = maxNum / b;
			if (BinString[b] == 1)
			{
				c++;
				if (c == n)
				{
					cout << b << '\n';
					break;
				}
			}
			for (int d = 2; d <= limit; d++)
			{
				BinString[b*d] = 0;
			}
		}
	}
	return 0;
}
