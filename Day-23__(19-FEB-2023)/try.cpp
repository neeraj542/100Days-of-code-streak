#include <bits/stdc++.h>
using namespace std;

// void printBinary(int totalNum){
//     int arr[64];
//     int i=0,r;
//     while(totalNum != 0)
//     {
//         r = totalNum%2;
//         arr[i++] = r;
//         totalNum /= 2;
//     }

//     for(int j=i-1; j>=0; j--){
//         cout << arr[j];
//     }
//     return;
// }
int main(){
    string s1, s2;
    cin >> s1 >>s2;

    int n, N, decimalNo1=0, decimalNo2=0, p=0, P=0;
    n = s1.size();
    N = s2.size();


    for(int i=n-1; i>=0; i--){
        if(s1[i] == '1'){
            decimalNo1 = decimalNo1 + pow(2, p);
        }
        p++;
    }
    
    for(int i=N-1; i>=0; i--){
        if(s2[i] == '1'){
            decimalNo2 = decimalNo2 + pow(2, P);
        }
        P++;
    }

    int totalNum = decimalNo1 + decimalNo2;
    // cout << totalNum;

    // printBinary(totalNum);

    int arr[64];
    int i=0,r;
    while(totalNum != 0)
    {
        r = totalNum%2;
        arr[i++] = r;
        totalNum /= 2;
    }

    for(int j=i-1; j>=0; j--){
        cout << arr[j];
    }

    return 0;
}