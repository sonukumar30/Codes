class Solution {
    public:
       void fun(int ind,int n,vector<int>&nums,vector<vector<int>>&ans){
           if(ind==n){
               ans.push_back(nums);
               return ;
           }
           
           for(int i=ind;i<n;i++){
               swap(nums[ind],nums[i]);
               fun(ind+1,n,nums,ans);
               swap(nums[ind],nums[i]);
           }
       }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        
        fun(0,n,nums,ans);
        return ans;
    }
};