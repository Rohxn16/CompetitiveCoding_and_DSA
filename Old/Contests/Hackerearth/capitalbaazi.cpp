#include <bits/stdc++.h>
using namespace std;

char upper(char ch){
	return 'A' + (ch - 'a');
}

int main(int argc, char const *argv[])
{

	while(true){
		string str;
		cin >> str;
		if(str.size() == 0) break;
		else{
			for(int i = 0; i < str.size(); i++){
				str[i] = upper(str[i]);
			}
			cout << str << "\n";
		}
	}

	return 0;
}