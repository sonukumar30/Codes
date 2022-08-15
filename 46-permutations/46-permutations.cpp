class Solution {
    public:
       void fun(int n,vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ar){
           if(ds.size()==n){
               ans.push_back(ds);
               return ;
           }
           
           for(int i=0;i<n;i++){
               if(!ar[i]){
                   ds.push_back(nums[i]);
                   ar[i]=1;
                 fun(n,ds,nums,ans,ar);
                   ar[i]=0;
                   ds.pop_back();
               }
           }
       }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>ar(n,0);
        fun(n,ds,nums,ans,ar);
        return ans;
    }
};