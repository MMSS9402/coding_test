#include <iostream>
using namespace std;
int arr[11] = { 3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10 };
int getSum(int index)
{
	int sum = 0;
	int x;
	for (x = index; x < index + 5; x++)
	{
		sum += arr[x];
	}


	return sum;
}
int main()
{
	int index;
	int result;
	cin >> index;

	result = getSum(index);

	cout << result;


	return 0;
}