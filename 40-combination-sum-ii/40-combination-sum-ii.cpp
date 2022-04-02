class Solution {
    public:
       void fun(int ind,int t,vector<int>&d,vector<int>&v,vector<vector<int>>&ans,int n){
          
        if(t==0){
        ans.push_back(d);
               
               return ;
           }
           for(int i=ind;i<n;i++){
               if(i>ind&&v[i]==v[i-1])
                   continue;
               if(v[i]>t)
                   break;
               d.push_back(v[i]);
               fun(i+1,t-v[i],d,v,ans,n);
               d.pop_back();
           }
          
       }
public:
  vector<vector<int>> combinationSum2(vector<int>& v, int t) {
          sort(v.begin(),v.end());
         vector<vector<int>>ans;
        int n=v.size();
        vector<int>d;
        fun(0,t,d,v,ans,n);
      
       
        return ans;
    }
};