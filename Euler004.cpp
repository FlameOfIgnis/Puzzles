#include <iostream>

using namespace std;

int checkPal(int i)
{
	int remainder = 0, reverse_num = 0;
	int temp = i;
	while (temp != 0)
	{
		remainder = temp % 10;
		reverse_num = reverse_num * 10 + remainder;
		temp /= 10;
	}
	if (reverse_num == i)
		return 1;
	else
		return 0;
}

int main() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n, ij;
		cin >> n;
		int largest = 0;
		for (int i = 100; i<1000; i++)
			for (int j = 100; j<1000; j++)
			{
				ij = i*j;
				if (ij >= n)break;
				if (ij >= 101101)
				{
					if (checkPal(ij) && ij>largest)
						largest = ij;
				}
			}
		cout << largest << '\n';
	}
	return 0;
}