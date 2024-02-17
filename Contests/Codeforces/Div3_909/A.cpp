#include <bits/stdc++.h>
using namespace std;

string checkWinner(int n){
 
  if(n %3 == 0) return "Second";
  else return "First";

}

int main (int argc, char *argv[]) {
  
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    string res = checkWinner(n);
    cout << res <<'\n';
  }

  return 0;
}
