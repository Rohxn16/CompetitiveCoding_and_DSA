#include <bits/stdc++.h>
using namespace std;

string checkPalindrome(string s){
	for(int i = 0; i < s.length()/2; i++){
		if(s[i] == s[s.length()-i-1]) continue;
		else return "Not Palindrome";
	}
	return "Palindrome";
}

int main(){
	
	long long int n;
	cin >> n;
	
	string num = to_string(n);
	string res = checkPalindrome(num);
	cout << "The number "<<res<<".\n";
}