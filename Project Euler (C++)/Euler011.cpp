#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	vector< vector<int> > grid(20, vector<int>(20));
	for (int grid_i = 0; grid_i < 20; grid_i++)
		for (int grid_j = 0; grid_j < 20; grid_j++) {
			cin >> grid[grid_i][grid_j];
		}

	unsigned long int maxPR = 0;
	unsigned long int curPR = 0;
	for (int i = 0; i<20; i++)
		for (int j = 0; j<20; j++)
		{
			if (i<17)
			{
				//sideways
				curPR = grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j];
				if (curPR>maxPR) maxPR = curPR;
			}
			if (j<17)
			{
				//vertical
				curPR = grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3];
				if (curPR>maxPR) maxPR = curPR;
			}
			if (i<17 && j<17)
			{
				//diagonal 1
				curPR = grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3];
				if (curPR>maxPR) maxPR = curPR;
			}
			if (i>2 && j<17)
			{
				//diagonal 2
				curPR = grid[i][j] * grid[i - 1][j + 1] * grid[i - 2][j + 2] * grid[i - 3][j + 3];
				if (curPR>maxPR) maxPR = curPR;
			}

		}
	cout << maxPR;
	return 0;
}
