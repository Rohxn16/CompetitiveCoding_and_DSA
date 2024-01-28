#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >>t ;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int flag = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '1' && i != n-1){
                if(flag == 0)cout <<"IDK\n";
                else cout <<"NO\n";
            }

            if(s[i] == '1' && i == n-1){
                if(flag == 0) cout << "YES\n";
                else cout << "NO\n";
            }

            if(s[i] == '0' && i != n-1){
                flag++;
                cout <<"NO\n";
            }

            if(s[i] == '0' && i == n-1){
                cout << "NO\n";
            }
        }
    }
    return 0;
}
