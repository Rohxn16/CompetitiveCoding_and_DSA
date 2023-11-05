#include <bits/stdc++.h>
using namespace std;

int getLesser(long long arr[], int n, int k){
	sort(arr,arr+n);
	for(int i = 0; i < n; i+=k){
		if(arr[k-1] != arr[k]){
			if(arr[k-1]+1 != arr[k]) return arr[k-1]+1;
			else return arr[k-1];
		}else continue;
	}
	return -1;
}

int main(){
// start here
int n,k;
cin >>n >> k;
long long arr[n];
for(int i = 0; i < n; i++){
	long long x;
	cin >> x;
	arr[i] = x;
}

int res = getLesser(arr,n,k);
cout << res;
return 0;
}
