#include <bits/stdc++.h>
using namespace std;

long long int sumArr(long long int n, long long int arr[]){
 int sum = 0;
  for(int i = 0; i < n; i++){
    sum += arr[i];
  }
  return sum / n;
}

int main (int argc, char *argv[]) {
  long long int arr[10000];
  long long int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  long long int avg = sumArr(n,arr);
  cout << "The average is : " << avg<<'\n';
  return 0;
}
