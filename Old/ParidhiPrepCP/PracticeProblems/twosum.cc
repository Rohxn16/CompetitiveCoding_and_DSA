#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    int n = nums.size();
    unordered_map<int,int> mp;
    vector<int> ans(2);

    for(int i = 0; i < n; i++){
        int num = nums[i]; // the current number

        if(mp.find(num) != mp.end()){
            ans[0] = mp[num];
            ans[1] = i;
        }else{
            mp[target - num] = i;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(arr,target);
    cout << ans[0] <<" "<<ans[1]<<endl;
}