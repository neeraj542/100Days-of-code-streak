


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
    string a, b;
    cin >> a >>b;

    int n, N, decimalNo1=0, decimalNo2=0, p=0, P=0;
    n = a.size();
    N = b.size();


    for(int i=n-1; i>=0; i--){
        if(a[i] == '1'){
            decimalNo1 = decimalNo1 + pow(2, p);
        }
        p++;
    }
    
    for(int i=N-1; i>=0; i--){
        if(b[i] == '1'){
            decimalNo2 = decimalNo2 + pow(2, P);
        }
        P++;
    }

    int totalNum = decimalNo1 + decimalNo2;

    string arr;
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