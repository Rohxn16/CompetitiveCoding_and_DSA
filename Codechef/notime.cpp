#include <bits/stdc++.h>
using namespace std;

string checkTime(int n, int h, int x, int arr[]){
	for(int i = 0; i < n; i++){
		if(x + arr[i] >= h) return "YES";
	}
	return "NO";
}

int main(){

	int n,h,x;
	cin >> n >> h >> x;
	int arr[100];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	//stdin complete
	string res = checkTime(n,h,x,arr);
	cout << res <<'\n';

return 0;
}
