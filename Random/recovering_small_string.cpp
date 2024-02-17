#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	vector<char> v = {};
	
	for(char ch = 'a'; ch <= 'z'; ch++){
		v.push_back(ch);
	}
	
	while(t--){
		int n;
		cin >> n;
		string res = "";
		if(n-26 > 1){
			res += 'z';
			n = n-26;
		}else{
			for(int i = 25; i > 0; i--){
				if((n - i) > 1){
					res += v[i-1];
					n = n - i;
				}
			}
		}

		if(n-26 >= 1){
			res += 'z';
			n = n-26;
		}else{
			for(int i = 25; i > 0; i--){
				if((n - i) >=1){
					res += v[i-1];
					n = n - i;
				}
			}
		}

		res += v[n-1];
		reverse(res.begin(), res.end());
		cout << res <<endl;
	}
return 0;
}
