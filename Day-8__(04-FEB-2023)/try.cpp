#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,2,1,1,3};
    int ans = 0;
    // int n = arr.size();
        
    for(int i=0; i<6; i++){
        ans = ans ^ arr[i];                  
    }
       
    cout << ans;
    return 0;
}