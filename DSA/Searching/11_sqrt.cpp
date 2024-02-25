#include <bits/stdc++.h>
using namespace std;


int root(int n){
	 int start = 1;
	 int end = n;

	 while(start < end){
	 	int mid = (start + end)/2;

	 	if(mid*mid == n) return mid;

	 	else if(mid * mid > n) end = mid -1;

	 	else start = mid + 1;
	 }
	 return end;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	cout << root(n)<<endl;
	return 0;
}