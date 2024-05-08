#include <bits/stdc++.h>
using namespace std;

bool checkAlternate(string s, int n){
    for(int i = 0; i < n-1; i++){
        if(s[i] != s[i+1]) continue;
        else return false;
    }
    return true;
}

int solve(int n, string num){
    if(n == 1 || checkAlternate(num,n))return 0;
    else{
        
    }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string num ; int n;
    cin >> n >> num;

    

  }
}