#include <iostream>
using namespace std;

int n;
void run(int level)
{
	if (level == n + 8) return;
	run(level + 2);
	cout << level << " ";
}

int main()
{
	cin >> n;
	run(n);
	return 0;
}