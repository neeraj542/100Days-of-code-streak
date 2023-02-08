#include <bits/stdc++.h>
using namespace std;

//commenting this..

int main()
{
    int arr[6] = {1, 2, 2, 1, 1, 3};
    int n = 6;
    int count = 0;

    vector<int> totalOccur;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] == arr[i])
        {
            count++;
        }
        else if (n == 2 && arr[0] != arr[1])
        {
            cout << "false" << endl;
        }
        else
        {
            totalOccur.push_back(count);
            count = 0;
        }
    }

    sort(totalOccur.begin(), totalOccur.end());

    if (totalOccur.size() == 0)
    {
        cout << "true" << endl;
    }
    
    int size = totalOccur.size();
    for (int i = 0; i < size - 1; i++)
    {
        if (totalOccur[i] == totalOccur[i + 1])
        {
            cout << "false" << endl;
        }
    }
    cout << "true" << endl;

    return 0;
}

