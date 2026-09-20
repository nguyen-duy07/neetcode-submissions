class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> s;
        for (int stone : stones) s.push(stone);
        while (s.size() > 1){
            int top = s.top();
            s.pop();
            int sec = s.top();
            s.pop();
            if (top != sec) s.push(top - sec);
        }
        s.push(0);
        return s.top();
    }
};
