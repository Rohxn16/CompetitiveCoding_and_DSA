#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int kids,cookies;
        cin >> kids>> cookies;

        if(kids == cookies) cout << 0 <<endl;
        else if(kids > cookies){
            cout << kids - cookies <<endl;
        }
        else{
            int mod = cookies % kids;
            int next = (cookies/kids) + 1;
            int more_cookies_needed = (kids*next) - cookies;

            (more_cookies_needed < mod)? cout << more_cookies_needed <<endl : cout << mod <<endl;
            
        }
    }
}
