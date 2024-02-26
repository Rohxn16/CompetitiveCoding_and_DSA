#include <bits/stdc++.h>
using namespace std;

int check(string s, int n, int k){

	int ans = n;
	for(int i = 0; i <= n-k; i++){
		int b = 0;
		int w = 0;
		string sub = "";
		for(int j = i; j < i+k; j++){

			if(s[j] == 'B')b++;
			else w++;
			sub += s[j];
		}
		if(b == k)return 0;
		else ans = min(ans,w);

		// cout << sub << " " <<w <<" "<<b <<endl;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;

		int ans = check(s,n,k);
		cout << ans <<endl;
	}
	return 0;
}