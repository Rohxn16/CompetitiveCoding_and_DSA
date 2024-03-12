#include <bits/stdc++.h>
using namespace std;

int countDots(string s){
int ans = 0;
    for(char ch : s){
        if(ch == '.') ans++;
    }
    return ans;
}

int countMoves(string s, int n){
    int flag = 0;
    int ans = 0;
    if(n == 1){
        // do some
        if(s[0] == '.') ans++;
    }else if(n == 2){
        // do some
        ans = countDots(s);
    }else{
        for(int i = 2; i < n; i++){
            char ch,ch2,ch3;
            ch = s[i];
            ch2 = s[i-1];
            ch3 = s[i-2];
    
            if(ch == '.' && ch2 == '.' && ch3 == '.'){
                flag++;
                ans=2;
                break;
            }
        }
        if(flag == 0){
            ans = countDots(s);
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int moves = countMoves(s,n);
        cout << moves << endl;
    }
}