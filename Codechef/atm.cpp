#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
            cin >> n >> k;
            for(int i = 0; i < n; i++){
                int x;
                cin >> x;
                if(x <= k){
                    cout << 1;
                    k = k - x;
                }else{
                    cout<<0;
                }
            }
            cout<<endl;
    }
    return 0;
}
