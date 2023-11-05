#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int dp[N];

int fibo(int n){
  if (n == 0) return 0;
  if (n == 1) return 1;
  else return fibo(n-1) + fibo(n-2);
}

//to optimize the above function we use dynamic programming
int fib(int n){
  if(n == 0) return 0;
  if(n == 1) return 1;
  if(dp[n] != -1) return dp[n]; // meoisations

  return dp[n] = fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[]) {
  memset(dp,-1,sizeof(dp));
  int n;
  cin >> n;
  int res = fib(n);
  cout << res;
  return 0;
}
