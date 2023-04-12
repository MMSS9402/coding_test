#include <iostream>

using namespace std;

int main()
{
	int vect[6] = { 0 };

	cin >> vect[0] >> vect[1];

	int x;
	for (x = 2; x <= 5; x++)
	{
		vect[x] = vect[x - 2] * vect[x - 1];
	}

	cout << vect[5];

	return 0;
}