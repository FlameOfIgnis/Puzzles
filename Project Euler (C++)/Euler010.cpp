#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	int lastn = 2;
	bool *BinString;
	BinString = (bool*)malloc(2 * sizeof(bool));
	for (int a0 = 0; a0 < t; a0++) {
		int n, tot = 0;
		cin >> n;
		int c = 0;
		BinString = (bool*)realloc(BinString, (n + 1) * sizeof(bool));
		unsigned int maxNum = n;
		BinString[0] = 0;
		BinString[1] = 0;
		for (unsigned int a = lastn; a <= maxNum; a++)
		{
			BinString[a] = 1;
		}
		//loop and remove logic
		for (unsigned int b = 2; b <= maxNum; b++)
		{
			int limit = maxNum / b;
			if (BinString[b] == 1)
			{
				c++;
				tot += b;
				for (int d = 2; d <= limit; d++)
				{
					BinString[b*d] = 0;
				}
			}
		}
		lastn = n;
		cout << tot << "\n";
	}
	return 0;
}