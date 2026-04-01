class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(auto &it : nums){
            m[it]++;
        }
        priority_queue<pair<int,int>>pq;
        for(const auto&it :m){
            pq.push({it.second, it.first});
        }
    vector<int>v;
        for(int i=0;i<k;i++){
            int y = pq.top().second;
            pq.pop();
            v.push_back(y);
        }
        return v;
    }
};