#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {-1,-2,-3,-4,3,2,1};

    int ans = 0;
    for(int i=0; i<7; i++){
        if(arr[i]==0){
            return 0;
        }
        if(arr[i] < 0)
            ans++;
        
    }

    if(ans%2 == 0)
        cout << "Positive (+)";
    else if(ans % 2 !=0 )
        cout << "Negative (-)";


    return 0;
}