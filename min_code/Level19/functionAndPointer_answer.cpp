#include <iostream>
using namespace std;

void BBQ(int *a, int *b)
{
    int vect[5];
    int max = -99;
    int min = 99;
    for (int i = 0; i < 5; i++)
    {
        cin >> vect[i];
        if (vect[i] > max)
            max = vect[i];
        if (vect[i] < min)
            min = vect[i];
    }

    *a = max;
    *b = min;
}

int main()
{
    int a, b;
    BBQ(&a, &b);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}