#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
//   cin >> t;
t = 1;
  while(t--){
    vector<int> v = {1,2,3,4,5,6,7,8};
    vector<int> ::iterator it = v.begin(); // this points to the first element of the vector
    vector<int> ::iterator it2 = v.end(); // this points the address after the last element of the array

    cout << *++it <<endl;

    // iterating a vector using iterator
    for(auto it = v.begin(); it != v.end(); ++it){
      // cout << *it <<endl;
    }


    vector<pair<int,int>> vp =  {{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>> :: iterator itr;

    for(itr = vp.begin(); itr != vp.end(); itr++){
      cout << itr->first <<" "<<itr->second <<endl;
    }

    //aternative way to use iterators / iterating vectors
    for(int i:v){ // this creates a copy of every value that is accessed
      cout << i <<" ";
      i++; // this wont cause any change in the actual vector
    }
cout <<endl;
    //but this can cause a change
    for(int &i : v){
      cout <<i <<" ";
      ++i;
    }
    cout << endl;
    for(int &i : v){
      cout <<i <<" ";
      // ++i;
    }
  }
}