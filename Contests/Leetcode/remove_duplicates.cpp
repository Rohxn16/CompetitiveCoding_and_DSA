#include <bits/stdc++.h>
using namespace std;


int removeDuplicateElements(vector<int> &nums){
	map<int,int> m;
	for(int i:nums){
		m[i]++;
	}
	
	/*
	example
	[1 -> 2],[2 -> 1],[3 -> 2]
	*/
	
	vector<int> res;
	for(auto i:m){
		res.push_back(i.first);
	}
	
	return res;
	
}
int main(){
// start here
int n;
cin >> n;
vector <int> nums;
while(n--){
	int x;
	cin >> x;
	nums.push_back(x);
}
int res = removeDuplicateElements(nums);
cout << res <<'\n';
return 0;
}
