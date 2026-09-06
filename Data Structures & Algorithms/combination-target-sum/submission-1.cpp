class Solution {
public:
    vector<vector<int>> res;
    void backtrack(vector<int>& nums, int target, vector<int>& curr,int start){
        if (target == 0) {
            res.push_back(curr);
            return;
        }
        if (target < 0 || start >= nums.size()) return;
        curr.push_back(nums[start]);
        backtrack(nums, target - nums[start], curr, start);
        curr.pop_back();
        backtrack(nums, target, curr, start + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        backtrack(nums, target, cur, 0);
        return res;
    }
};
