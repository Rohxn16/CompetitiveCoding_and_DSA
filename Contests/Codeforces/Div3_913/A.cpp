#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;

    char ch1 = s[0];
    char ch2 = s[1];

    for(char ch = '1'; ch < '9'; ch++ ){
      if(ch != ch2){
        cout << ch1 << ch << endl;
      }
    }

    for(char ch = 'a'; ch <= 'h'; ch++){
      if(ch != ch1){
        cout << ch << ch2 <<endl;
      }
    }
  }
  
  return 0;
}
