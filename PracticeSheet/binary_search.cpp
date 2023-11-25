#include <bits/stdc++.h>
using namespace std;

int find(vector<int> v, int n, int key){
  int start = 0;
  int end = n-1;

  int mid;
  while(start <= end){
    mid = start + (end - start)/2;

    if(v[mid] == key) return mid;

    else if(v[mid] > key){
      end = mid - 1;
    }

    else{
      start = mid + 1;
    }
  }
  return -1;
}

int main (int argc, char *argv[]) {
  int n;
  cin >> n;
  vector <int> v;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }
  int key;
  cin >> key;

  int index = find(v,n,key);
  cout << index <<'\n';
  return 0;
}
