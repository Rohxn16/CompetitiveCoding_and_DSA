#include <bits/stdc++.h>
using namespace std;

    vector<int> sortColors(vector<int>& nums) {
        unordered_map<int,int> m;
        m[0] = 0;
        m[1] = 0;
        m[2] = 0;

        for(int i : nums){
            m[i]++;
        }

        for(auto i : nums){
            cout << i.first <<" " <<i.second <<",";
        }
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < m[0]; i++){
            ans.push_back(0);
        }

        for(int i = 0; i < m[1]; i++){
            ans.push_back(0);
        }

        for(int i = 0; i < m[2]; i++){
            ans.push_back(0);
        }

        return ans;
    }

int main(){
	vector<int> nums = {2,0,2,1,1,0};
	vector<int>ans = sortColors(nums);

	for(int i : ans){
		cout << i <<" ";
	}
	cout <<endl;
}