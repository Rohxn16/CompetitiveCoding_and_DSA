#include <bits/stdc++.h>
using namespace std;

int getDigits(int n){
  int d = 0;
  for(int i = n; i !=0;) d++;
  return d;
}

int calculate(int n, int digits){
  int sum = 0;
  for(int i = n; i != n; i /= 10){
    int digit = i % 10; // got the last one
    int temp = 1;
    for(int i = 0 ; i <digits; i++){
      temp *= digit;
    }
    sum += temp;
  }
  return sum;
}

int main (int argc, char *argv[]) {
  
  int n;
  cin >> n;
  int digits = getDigits(n);
  int res = calculate(n,digits);
  cout << res <<'\n';
  return 0;
}
