class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int n = nums.size();
        if(n==0)return 0;
        for(auto &it:nums)
        s.insert(it);

        int maxi =0;
        for(auto &it: s){
            //start the counting if this iterator is the start or else skip.. eg if it:1 then check if 0 exists in the set or not if it doesn't then 1 is the start and do the checking..

            if(s.find(it-1)==s.end()){
            int x = it;
            int c=1;
            while(s.find(x+1)!=s.end()){
                c++;
                x++;
            }
            maxi = max(c,maxi);
            
            }
        }
        
        return maxi;
    }
};