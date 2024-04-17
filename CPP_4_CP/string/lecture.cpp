#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> n >> m;
    unordered_map<string,string> mp;
    for(int i = 0; i < m; i++){
        string s1,s2;
        cin >> s1 >> s2;
        if(s1.size() <= s2.size()) mp[s1] = s1;
        else mp[s1] = s2;
    }

    string in[n];
    string ans = "";
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        ans += mp[s]+" ";
    }

    cout << ans <<endl;
    
}