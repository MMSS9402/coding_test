#include<iostream>
#include<string>
using namespace std; 


int main()
{
	int MAP[3][4] = {
				{65000,35,42,70},
				{70,35,65000,1300},
				{65000,30000,38,42}
	};
	int cnt[65535 + 1] = { 0 }; 
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) {
			int val = MAP[r][c];
			cnt[val] += 1;
		}
	}
	int maxWho = -1;
	int maxCnt = -1;
	for (int num = 1; num <= 65535; num++) {
		// cnt[num] vs maxCnt
		if (cnt[num] > maxCnt) {
			maxCnt = cnt[num];
			maxWho = num;
		}
	}
	cout << maxWho; 
	return 0; 
}