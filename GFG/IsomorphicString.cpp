#include <bits/stdc++.h>
using namespace std;

bool areIsomorphic(string str1, string str2)
{
	set<char> s1;
	set<char> s2;
	if(s1.length() != s2.length())return false;
	for(char ch : str1){
		s1.insert(ch);
	}
	
	for(char ch : str2){
		s2.insert(ch);
	}
	
	if(s1.size() == s2.size())return true;
	else return false;
}

int main(){
// start here
string s1,s2;
cin >> s1 >> s2;
bool res = areIsomorphic(s1,s2);
cout << res;

return 0;
}
