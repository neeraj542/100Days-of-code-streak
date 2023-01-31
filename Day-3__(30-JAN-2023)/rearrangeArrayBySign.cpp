// #Problem-Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
// #Platform-Name: LeetCode

#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[6] = {3,1,-2,-5,2,-4};

    int arr[6];
    int evenPos=0; //starting index with +ive number
    int oddPos=1;
    for(int i=0; i<6; i++){

        if(nums[i]>0){
            arr[evenPos] = nums[i];    //storing +ives in even positions
            evenPos = evenPos + 2;
        }else{
            arr[oddPos] = nums[i];    //storing -ives in odd positions
            oddPos = oddPos + 2;
        }
    }

    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
