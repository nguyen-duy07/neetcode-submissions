class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> count;
        for (int c : nums){
            if (count.count(c)) return true;
            count.insert(c);
        }
        return false;
    }
};