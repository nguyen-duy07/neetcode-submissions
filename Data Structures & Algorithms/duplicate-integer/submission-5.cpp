class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int c : nums){
            if (seen.count(c)) return true;
            seen.insert(c);
        }
        return false;
    }
};