class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int x = t.length();
        if(n!=x)return false;
        unordered_map<char, int>m;
        for(auto& it :s){
            m[it]++;
        }
        for(int i=0;i<x;i++){
            m[t[i]]--;
        }
        for(const auto&it :m){
            if(it.second !=0)return false;
        }
        return true;
    }
};