// Problem Link: 
Platform Name:
Problem Number: 


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[6] = {1,1,0,1,1,1};
    int max1 = 0;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            max1 = max(max1, count);
            count = 0;
        }
    }
    max1 = max(max1, count);
    
    cout << max1 << endl;
    return 0;
}
