class Solution {
public:
    vector<vector<int>> res;
    void backtrack(vector<int>& nums, int target, vector<int>& cur, int start){
        if (target == 0) {
            res.push_back(cur);
            return;
        }
        if (target < 0 || start >= nums.size()){
            return;
        }
        cur.push_back(nums[start]);
        backtrack(nums, target - nums[start], cur, start);
        cur.pop_back();
        backtrack(nums, target, cur, start + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        backtrack(nums, target, cur, 0);
        return res;
    }
};
