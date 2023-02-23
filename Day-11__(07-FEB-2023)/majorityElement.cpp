// Platform Name: LeetCode
// Problem Level: 
// Problem Name:
// Problem Link:
// Date on solved:

#include <bits/stdc++.h>
using namespace std;

int main()
{   
        vector<int> nums= {2,2,1,1,1,2,2}; //vector storing some values
        
        int size = nums.size();
        int count = 0;

        sort(nums.begin(),nums.end());

        for(int i=0; i<size; i++){
            count = nums[(size-1)/2];
        }
        // return count;
        cout << count << endl;
        
        
    return 0;
}
