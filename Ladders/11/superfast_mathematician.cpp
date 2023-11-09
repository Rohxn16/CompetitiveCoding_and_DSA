#include <bits/stdc++.h>
using namespace std;

string add(string n1, string n2){
	string res;
	for(int i = 0; i < n1.length(); i++){
		char c1 = n1[i];
		char c2 = n2[i];
		if(c1 == '1' && c2 =='1') res = res + '0';
		else if((c1 == '0' && c2 == '1') || (c2 == '0' && c1 == '1')) res = res + '1';
		else res = res + '0';
	}
	return res;
}

int main(){
// start here
string n1, n2;
cin >> n1 >> n2;

string res = add(n1,n2);
cout << res;
return 0;
}
