// all_of, none_of any_of are lambda functions to check for a condition on all elements on a data structure without iterating it
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >>x;
        v.push_back(x);
    }

    cout << [](int x, int y){return x+y;}(4,7) <<endl;

    //this can be done in another way
    auto sum = [](int x, int y){return x+y;};
    cout << sum(v[0],v[1]);


    // all_of functions
    cout << all_of(v.begin(),v.end(),[](int x){return x > 0;});

    // the use of anyof and noneof involves same syntax
  }
}