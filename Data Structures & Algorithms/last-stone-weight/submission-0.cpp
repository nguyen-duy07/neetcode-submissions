class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> maxHeap;
        for (int stone : stones) maxHeap.push(stone);
        while (maxHeap.size() > 1){
            int top = maxHeap.top();
            maxHeap.pop();
            int second = maxHeap.top();
            maxHeap.pop();
            if (second < top) maxHeap.push(top - second);
        }
        maxHeap.push(0);
        return maxHeap.top();
    }
};
