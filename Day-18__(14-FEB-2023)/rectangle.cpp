#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin >> testCase;
	
	while(testCase--){
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if((a == b) && (c == d)){
	        cout << "YES" << endl;
	    }else if((b == c) && (a == d)){
	        cout << "YES" << endl;
	    }else if((b == d) && (c == a)){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
