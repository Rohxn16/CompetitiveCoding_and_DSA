#include <bits/stdc++.h>
using namespace std;

int main(){
	int s,n;
	cin >> s >> n;
	int effort[n];
	int reward[n];
	int ratio[n];
	for(int i = 0; i < n; i++){
		cin >> effort[i] >> reward[i];
		ratio[i] = reward[i]/effort[i];
	}
	
}