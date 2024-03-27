#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        
        int ans;
        if(a - b >= 10) ans = 0;
        
        if(a -b < 10 && a - b >= 1){
            int diff = 10 - (a - b);
            ans = (diff % 3 == 0)?diff/3:(diff/3)+1;
        }
        
        if(a - b < 0){
            int diff =  b -a + 10;
            ans = (diff % 3 == 0)?diff/3:(diff/3)+1;
            // ans = 
        }
        
        cout << ans <<endl;
    }
}


// W A