class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        for (int c : nums){
            if (c == 0){
                count = 0;
            }else if (c == 1){
                count++;
                if (count > max) max = count;
            }
        }
        return max;
    }
};