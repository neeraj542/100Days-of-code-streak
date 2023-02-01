#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {0,2,1,5,3,4};

    int ans[6];
    for(int i=0; i<6; i++){
        ans[i] = arr[arr[i]];
    }

    for(int i=0; i<6; i++){
        cout << ans[i] << " ";
    }

    return 0;
}