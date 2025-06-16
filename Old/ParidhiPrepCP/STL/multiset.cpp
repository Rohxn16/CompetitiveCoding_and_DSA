#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,k;
    multiset<long long> bag;

    for(int i = 0; i < n; i++){
        long long c;
        cin >> c;
        bag.insert(c);
    }
    long long total_candies = 0;
    for(int i = 0; i < k; i++){
        auto last = --bag.end(); // points to the last itr
        long long maxcandy = *last;
        total_candies += maxcandy;
        bag.erase(last);
        bag.insert(maxcandy/2);
    }

    cout << total_candies <<endl;
  }
}