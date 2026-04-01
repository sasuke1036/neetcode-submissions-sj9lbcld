class Solution {
public:
   
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>v;
        int n = strs.size();
        unordered_map<string, vector<string>>m;
        for(int i=0;i<n;i++){
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            m[strs[i]].push_back(s);
        }
        for(const auto&it :m){
            v.push_back({it.second});
        }
        return v;

    }
};
    