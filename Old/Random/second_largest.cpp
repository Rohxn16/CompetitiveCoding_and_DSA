#include <bits/stdc++.h>
using namespace std;

int getSecond2(vector <int> arr, int n){
  int max,max2;
  max = 0;
  max2 = 0;

  for(int i:arr){
    if(i > max){
      max = i;
    }
  }

  for(int i:arr){
    if(i > max2 && i < max){
      max2 = i;
    }
  }

  return max2;
}

int getSecond(vector <int> arr, int n){
  //sorting with n log n algo
  sort(arr.begin(), arr.end(), greater<int>());
  return arr[1];
}

int main (int argc, char *argv[]) {
  
  int n;
  cin >> n;
  vector <int> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  //n log n time complexity approach
  int second1 = getSecond(arr,n);
  //n (linear) time approach
  int second2 = getSecond2(arr,n);

  cout << "The second element of the array is : "<<second1<<'\n';
  cout << "The second element of the array is : "<<second2<<'\n';
  return 0;
}
