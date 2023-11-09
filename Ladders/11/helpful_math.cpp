#include <bits/stdc++.h>
using namespace std;

vector<int> dissect(string s){
	vector<int> v;
	for(char ch : s){
		if(ch != '+'){
			v.push_back((int)ch-48);
		}
	}
	return v;
}

int main(){
// start here
string s;
cin >> s;

vector<int> v = dissect(s);
sort(v.begin(),v.end());

for(int i = 0; i < v.size(); i++){
	if(i != v.size()-1){
		cout << v[i] <<"+";
	}else{
		cout << v[i];
	}
}

return 0;
}
