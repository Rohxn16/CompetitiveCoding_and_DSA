#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    set<string> s;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        s.insert(x);
    }
    // removing an elemnt 
    s.erase(1); // removes the element, this can also take iterator as well
    for(auto it : s){
        cout << it <<" ";
    }
  }
}