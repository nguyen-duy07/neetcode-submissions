class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> maxHeap;
        for (int s : stones) maxHeap.push(s);
        while (maxHeap.size() > 1){
            int top = maxHeap.top();
            maxHeap.pop();
            int sec = maxHeap.top();
            maxHeap.pop();
            if (top != sec) maxHeap.push(top - sec);
        }
        maxHeap.push(0);
        return maxHeap.top();
    }
};
