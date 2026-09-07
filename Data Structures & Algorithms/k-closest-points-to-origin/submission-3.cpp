class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        std::priority_queue<pair<int, vector<int>>> maxHeap;
        for (const auto& pt : points){
            int dist = pt[0] * pt[0] + pt[1] * pt[1];
            maxHeap.push({dist, pt});
            if (maxHeap.size() > k) maxHeap.pop();
        }
        while (!maxHeap.empty()) {
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
};
