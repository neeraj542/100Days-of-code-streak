// Platform Name: LeetCode
// Problem Number: 1470. Shuffle the Array
// Problem Link: https://leetcode.com/problems/shuffle-the-array/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {2,5,1,3,4,7};
    int n = 3;
    int size = 6;

        int resultArr[n*2];

        for(int i=0; i<n; i++){

            resultArr[2*i] = arr[i];
            resultArr[2*i + 1] = arr[n+i];
        }
        // vector<int> result(resultArr, resultArr + (n*2));
        for(int i=0; i<size; i++){
            cout << resultArr[i] << " ";
        }
        
}
