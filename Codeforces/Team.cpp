#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int count = 0;	for(int i = 0; i <n; i++){
		int a,b,c;
		cin >> a;
		cin >> b;
		cin >> c;
		
		if(a+b+c >= 2) count++;
		else continue;
	}
	cout << count;
	return 0;
}