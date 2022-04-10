#include <iostream>
using namespace std;

int main()
{
	char arr[10];
	char a, b;
	int x;

	cin >> arr;
	cin >> a >> b;

	for (x = 0; x < 10; x++)
	{
		if (arr[x] == a)
		{
			arr[x] = b;
		}
	}

	cout << arr;


	return 0;
}