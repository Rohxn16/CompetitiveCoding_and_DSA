#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

  // STDIN

  int prefix = 1;
  int suffix = 1;

  for(int i = 1; i < n; i++){
    if(arr[i] == arr[i-1]) prefix++;
    else break;
  }

  for(int i = n-2; i >= 0; i--){
    if(arr[i] == arr[i+1]) suffix++;
    else break;
  }

    // cout << prefix <<" " <<suffix <<endl;
    if(n == prefix || n == suffix) cout << 0<<endl;
    else{
      if(arr[0] == arr[n-1]){
        cout << n - prefix - suffix<<endl;
      }else{
        if(prefix >= suffix){
          cout << n - prefix <<endl;
        }else{
          cout << n - suffix <<endl;
        }
      }
    }
  }
  return 0;
}
