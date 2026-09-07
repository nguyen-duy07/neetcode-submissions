class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::priority_queue<int> maxHeap;
        for (int num : nums){
            maxHeap.push(num);
            if (maxHeap.size() > nums.size() - k + 1) maxHeap.pop();
        }
        return maxHeap.top();
    }
};
