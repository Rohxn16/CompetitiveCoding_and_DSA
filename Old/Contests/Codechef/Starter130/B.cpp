#include <bits/stdc++.h>
using namespace std;

int rev(int n){
    int rev = 0;
    while(n != 0){
        int d = n % 10;
        rev = rev*10 + d;
        n = n / 10;
    }
    return rev;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ra = rev(a);
        int rb = rev(b);
        
        if(a >= b || ra >= b || a >= rb || ra >= rb) cout << "YES\n";
        else cout << "NO\n";

        // cout << ra << " " <<rb;
    }
}
