#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[9] = {9,6,4,2,3,5,7,0,1};
    int n = 9;

    int sumOfLength = 0;
    sumOfLength = (n*(n+1))/2;

    int total = 0;
    for(int i=0; i<n; i++){
        total = total + nums[i];
    }

    cout << (sumOfLength-total);
    return 0;
}