#include <iostream>
using namespace std;

int main() 
{
	int arr[6];
	int i;
	int x, y;
	int bucket[100] = { 0 };
	int flag = 0;

	for (i = 0; i < 6; i++) 
	{
		cin >> arr[i];		
	}

	for (i = 0; i < 6; i++)
	{
		bucket[arr[i]]++;
	}

	for (i = 0; i < 100; i++)
	{
		if (bucket[i] > 1)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "도플갱어 발견";
	else cout << "미발견";


	return 0;

}