#include <bits/stdc++.h>
using namespace std;

bool isRound(int n){
  if(n < 10)return true;

  for(int i = n; i > 9; i = i / 10){
    int digit = i % 10;
    if(digit != 0) return false;
  }
  return true;
}

void printNonZero(int n){
  int count = 0;
  for(int i = n; i > 9; i = i / 10){
    if(i % 10 != 0)count++;
  }
  cout << count+1 <<endl;
}

void represent(int n){
  int count = 0;
  printNonZero(n);
  for(int i = n; i != 0; i = i / 10){
    if(i%10 != 0) cout << (i%10)*(pow(10,count))<<" ";
    count++;
  }
  cout << endl;
}

int main (int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if(isRound(n)) cout << 1 <<'\n' <<n <<'\n';
    else represent(n);
  }
  return 0;
}
