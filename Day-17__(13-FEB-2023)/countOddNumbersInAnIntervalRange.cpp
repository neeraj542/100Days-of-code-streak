#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int low = 8;
    int high = 90;
    for(int i=low; i<=high; i++){
        if(i%2 != 0){
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}
