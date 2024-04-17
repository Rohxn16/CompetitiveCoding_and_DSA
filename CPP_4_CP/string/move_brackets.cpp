#include <bits/stdc++.h>
using namespace std;

int main(){
        cin.tie(NULL); ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int d = 0;
        int md = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '(') d--;
            else d++;

            if(d > md) md = d;
        }

        cout << md;
    }
}