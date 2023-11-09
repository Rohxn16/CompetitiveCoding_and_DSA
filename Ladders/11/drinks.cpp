#include <bits/stdc++.h>
using namespace std;

int main(){
// start here

int n;
cin >> n;
int arr[n];
int sum = 0;
int base = 0;
for(int i = 0; i < n; i++){
	cin >> arr[i];
	sum = sum + arr[i];
	base = base + 100;
}
cout << (((double)sum/(double)base) * 100) <<setprecision(12);
return 0;
}
