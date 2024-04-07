#include <bits/stdc++.h>
using namespace std;

int getScore(string s){
	unordered_set <char> st;
	for(char ch : s){
		st.insert(ch);
	}
	return st.size();
}

// brute force approach (working)
void distinctSplit(string s, int n){
	string s1,s2;
	int n1,n2;
	int max = 0;
	for(int i = 1; i < n; i++){
		s1 = s.substr(0,i);
		s2 = s.substr(i);
		n1 = getScore(s1);
		n2 = getScore(s2);
		if(n1 + n2 > max) max = n1+n2;
	}
	
	cout << max <<endl;
	
	
	
}

void distinctSplitOptimized(string s, int n){
	// this approach is using a prefix and suffix array to store the distinct characters
	// traverse the array and record the number of unique prefixes at each position

	set<char> st;
	int pre[n];
	int suf[n];

	for(int i = 0; i < n; i++){
		st.insert(s[i]);
		pre[i] = st.size();
	}

	st.clear();

	for(int i=n-1; i >= 0; i--){
		st.insert(s[i]);
		suf[i] = st.size();	
	}
	int ans = 0;
	for(int i = 0; i < n-1; i++){
		ans = max(ans,pre[i]+suf[i+1]);
	}

	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		
		distinctSplitOptimized(s,n);
	}
}
