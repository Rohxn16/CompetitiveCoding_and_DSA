#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>

// functions
#define pb push_back
#define pop pop_back
#define in insert
#define rem erase

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    // start here
    int n;
    cin >> n;
    int arr[n];
    int psum = 0;
    int nsum = 0;
    int flag = 0;
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    	// psum += arr[i];
    	
    	if(arr[i] < 0) { //we keeping a sum of the negative ints
    		flag++;
    		nsum += -1*arr[i];
    	}else{
    		psum += arr[i];
    	}
    	
    }
    // stdin done
    
    if(flag != 0){
    	// if flag is not 0 then, it means there are negative integers in that case
    	// we are gonna rearrange the array to have all the negative elements at first
    	
    	cout << psum + nsum <<endl;
    	
    }else{
    	cout << psum <<endl;
    }
    
    // for(int i : arr) cout << i <<" ";
  }
  return 0;
}
