#include <bits/stdc++.h>
using namespace std;

bool isBinary(string num){
  for(char ch :num){
    if(ch != 0 || ch != 1) return false;
  }
  return true;
}

int main(){
  int t;
  cin >> t;
  int arr = [10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111];
  while(t--){
   int n;
   cin >> n;
   if(isBinary(str(num))) {
     cout << "YES\n";
   }else{

   }
  }
}
