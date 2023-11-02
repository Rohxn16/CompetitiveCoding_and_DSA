#include <bits/stdc++.h>
using namespace std;


int main(){
	
	int n,m;
	cin >> n >> m;
	int count = 0;
	for(int i = 0; i*i <= n && i <= m; i++){
		int j = n - (i*i);
		
		if(((j*j) + i) == m){
			count++;
		}
	}
	cout << count;
}