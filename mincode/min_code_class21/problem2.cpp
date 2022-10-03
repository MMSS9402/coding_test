#include <iostream>
using namespace std;
int n;
void run(int x)
{
    if (x == n)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        run(x + 1);
    }
}

int main()
{
    cin >> n;
}

// 얼마큼 퍼지는가를 "branch"
// 얼만큼 내려가는 가를 limit level 혹은 바닥조건,기저조건 이라고 합니다.