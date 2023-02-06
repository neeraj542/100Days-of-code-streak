// Problem-Link:
// Problem-Number:
// Platform-Name: LeetCode

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {0,2,1,5,3,4};
    int n = 6; //size of given array

    int ans[6];
    for(int i=0; i<n; i++){
        ans[i] = arr[arr[i]];
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}
