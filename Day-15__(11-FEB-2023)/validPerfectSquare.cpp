#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << " Enter number: ";
    cin >> num;

    int sq = sqrt(num);
    if (sq * sq == num)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }

    return 0;
}