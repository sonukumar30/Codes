class Solution {
    public:
       void fun(int i,int t,vector<int>&d,vector<int>&v,vector<vector<int>>&ans,int n){
           if(i==n){
               if(t==0){
                   ans.push_back(d);
               }
               return ;
           }
           if(v[i]<=t){
               t-=v[i];
                d.push_back(v[i]);
               fun(i,t,d,v,ans,n);
               t+=v[i];
               d.pop_back();
           }
             fun(i+1,t,d,v,ans,n);
       }
public:
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        vector<vector<int>>ans;
        int n=v.size();
        vector<int>d;
        fun(0,t,d,v,ans,n);
        return ans;
    }
};