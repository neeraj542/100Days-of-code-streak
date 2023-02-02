#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[8] = {4,3,2,7,8,2,3,1};
    sort(nums, nums+8);
    int arr[8];
    int count=0;
    for(int i=0; i<8; i++){

        if(nums[i] == nums[i+1]){
            arr[i] = nums[i];
            count++;
        }
    }

    for(int i=0; i<count; i++){
        cout << arr[i] << " ";
    }
}