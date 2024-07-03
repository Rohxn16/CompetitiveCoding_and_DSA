#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a == b == c){
            cout << 0 <<'\n';
            return 0;
        }
        int mx = max(max(a,b),c);
        int mn = min(min(a,b),c);
        int mid = a+b+c - (mx+mn);

        int sum = abs(mx-mid) + abs(mn-mid);
        cout << sum << endl;
    }
    
}