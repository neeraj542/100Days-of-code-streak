#include <bits/stdc++.h>
using namespace std;

int main(){
	int R;
	cin >> R;
	
	if(R>100){
	    cout << 0;
	}else if(R<=100 && R>50){
	    cout << 50;
	}else{
	    cout << 100;
	}
	return 0;
}