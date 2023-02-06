#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "codeleet";
    int indices[8] = {4,5,6,7,0,2,1,3};
    string str = s;
        for(int i=0; i<8; i++){
            str[indices[i]] = s[i];
        }
    for(int i=0; i<8; i++){
        cout << str[i];
    }
    return 0;
}