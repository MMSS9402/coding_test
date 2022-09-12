#include <iostream>
using namespace std;

int limit;

void run(int level)
{
	cout << level << " ";
	if (level == limit) return;
	run(level + 1);
	cout << level << " ";
}

int main()
{
	int n;
	cin >> n >> limit;
	run(n);
	return 0;
}