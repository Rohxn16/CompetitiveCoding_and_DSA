// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i : nums){
            s.insert(i);
        }
        int n = s.size();
        int x = 0;
        for(int i : s){
            nums[x] = i;
            x++;
        }
        return n;
    }
};