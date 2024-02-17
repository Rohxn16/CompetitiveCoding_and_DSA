#include <bits/stdc++.h>
using namespace std;

string check(string s, int n){
  int count = 0;
  for(char ch : s){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') count = 0;
    else count++;

    if(count >= 4)return "NO\n";
  }
  return "YES\n";
}

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n < 4)cout << "YES\n";
    else cout << check(s,n);
  }
  
  return 0;
}

