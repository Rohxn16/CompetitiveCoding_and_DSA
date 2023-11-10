#include <bits/stdc++.h>
using namespace std;

int returnLex(string s1,string s2){
		
for(int i = 0; i < s1.length(); i++){
	char ch1 = s1[i];
	char ch2 = s2[i];
	// cout << ch1 << " " << ch2 <<" ";
	if((int)ch1 < (int)ch2) return -1;
	else if((int)ch1 > (int)ch2) return 1;
}
return 0;

}

int main(){
// start here
string s1,s2;
cin >> s1 >> s2;
//cvt strings  to lowercase
transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
transform(s2.begin(),s2.end(),s2.begin(), ::tolower);

int res = returnLex(s1,s2);
cout << res <<endl;

return 0;
}
