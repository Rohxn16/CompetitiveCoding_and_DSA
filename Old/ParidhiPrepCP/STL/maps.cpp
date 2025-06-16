#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    // maps : key -> value
    map <int,int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
      int x,y;
      cin >> x >> y;
      mp[x] = y;
    }

    for(auto i : mp){
      cout << i.first <<" "<<i.second<<endl;
    }

    // another way to print
    for(auto it = mp.begin(); it != mp.end(); it++){
      cout << it->first <<" " <<it->second <<endl;
    }

    // this is an ordered map and they are automatically arranged in increaseing / lexicographical order of the keys


    // finding a value in a map
    auto it = mp.find(7);
    if(it != mp.end()){
      cout << it->first <<" "<<it->second<<endl;
    }

    // removing an element from the map
    mp.erase(it); // passing iterator as an argument
    mp.erase(2); // deletes the one with the value 2

    for(auto it : mp) cout << it.first <<" "<<it.second <<",";
  }

}

// time complexity : 
/*
  insertion : O(log n)
  accessing : O(log n)

*/