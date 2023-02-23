#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=7;
    int count = 0;
    int fact = 1;
    if (n == 0)
    {
        return 0;
    }

    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    while (fact != 0)
    {
        int rem = fact % 10;
        if (rem == 0)
        {
            count++;
        }
        fact = fact / 10;
    }
    cout << count;
    return 0;
}