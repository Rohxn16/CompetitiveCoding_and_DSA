#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
int t;
cin >> t;
while(t--){
	int n;
	cin >> n;
	string s;
	cin >> s;
	string res;
	for(auto i : s){
		if(i == 'A'){
			res = res + 'T';
		}else if(i == 'T'){
			res = res + 'A';
		}else if(i == 'G'){
			res = res + 'C';
		}else{
			res = res + 'G';
		}
	}
	cout <<res<<"\n";
	res = "";
}
return 0;
}
