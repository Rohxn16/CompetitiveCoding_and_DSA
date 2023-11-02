#define long long 	ll
#define push_back	pb
#include <bits/stdc++.h>
using namespace std;

int main(){

    const PI = 3.1415926535;

    ios::sync_with_studio(0);
    cin.tie(0);
    
    int m,n;
    cin >> m >> n;
    pair<int,int> arr[4] p;
    int count = 0;
    for(int = 0; i < m; i++){
    	for(int j = 0; j < n; j++){
    		char ch;
    		cin >> ch;
    		if(ch == '*'){
    			p[count] = make_pair(i,j);
    			count++;
    		}
    	}
    }
    
    for(int i = 0; i < 3; i++){
    	cout << p[i].first <<" " << p[i].second;
    }
    return 0;
}
