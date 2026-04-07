class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        //brute way:
        // for(int i=0;i<n;i++){
        //     int prod = 1;
        //     for(int j=0;j<n;j++){
        //         if(i!=j)prod *= nums[j];
        //     }
        //     //cout<<prod;
            
        //     ans.push_back(prod);
        // }
        // return ans;
        //optimal way:
        vector<int>pref(n,1);
        vector<int>suff(n,1);
        for(int i=1;i<n;i++){
            pref[i] = nums[i-1]*pref[i-1];
           
            //cout<<"pref[i]:"<<pref[i];
        }
        
        for(int i=n-2;i>=0;i--){
            suff[i] = nums[i+1]*suff[i+1];
            
            //cout<<"suff[i]:"<<suff[i];

        }
        for(int i=0;i<n;i++){
            // if(i=0) ans[i] = suff[i]*prod;
             ans[i] = pref[i]*suff[i];
            // else {
            //     ans[i] = pref[i-1]*prod;
            // }
        }
        return ans;
    }
};