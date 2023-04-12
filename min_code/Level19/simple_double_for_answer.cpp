#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	for (int y = 0; y < c; y++) {
		for (int x = a; x <= b; x++) {
			cout << x << " ";
		}
		cout << endl; 
	}
	return 0;
}