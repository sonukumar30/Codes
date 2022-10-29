class Solution {
public:
    int maxSubArray(vector<int>&v) {
        int n=v.size();
        int ans=v[0],maxi=0;
        for(int i=0;i<n;i++){
            maxi+=v[i];
            ans=max(ans,maxi);
            if(maxi<0)
                maxi=0;
            
        }
        return ans;
        
    }
};