#include <bits/stdc++.h>
using namespace std;

int prod(int n, int k){
	int p = 1;
	for(int i = 0; i < k; i++){
		p *= n;
	}
	return p;
}

int root(int n, int k){
	int start = 1;
	int end = n;

	while(start < end){
		int mid = start + (end - start)/2;

		if(pow(mid,k) == n) return mid;
		else if(pow(mid,k) > n) end = mid - 1;
		else start = mid + 1;
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int n ,k;
	cin >> n >> k;
	cout << root(n,k) <<endl;
	return 0;
}