#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n+1];
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr[x]++;
        }

        int max = 0; int maxc = 0;
        
        for(int i = 0; i <= n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }

        for(int i =0; i <= n; i++){
            if(arr[i] == max) maxc++;
        }

        if(maxc == 1) cout <<"YES\n";
        else cout <<"NO\n";

    }
    return 0;
}