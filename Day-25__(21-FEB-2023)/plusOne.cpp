#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> digits = {4,3,2,1};
    int size = digits.size();

    for(int i=size-1; i>=0; i--){
        if(digits[i]<9){
            digits[i]++;
            for(int i=0; i<size; i++){
                cout << digits[i] << " " << endl;
            }
        }else{
            digits[i]=0;
        }
    }
    digits.push_back(0);
    digits[0]=1;

    for(int i=0; i<size; i++){
        cout << digits[i] << " " << endl;
    }
    return 0;
}