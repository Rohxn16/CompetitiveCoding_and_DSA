#include <bits/stdc++.h>
using namespace std;

int main(){
    int t =- 1;
    // cin >> t;
    while(t--){
        int  n, k, l, c, d, p, nl, np;
        cin >> n >> k >> l >> c >> d >> p >> nl >> np;

        int cap = k * l;
        int lime = c * d;

        int ans = min(min(cap/nl,lime),p/np)/n ;
        cout << ans <<endl;
    }
}