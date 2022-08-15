class Solution {
public:
    void fun(int ind,vector<int>&d,vector<int>&v,vector<vector<int>>&ans,int n){
       ans.push_back(d);
        for(int i=ind;i<n;i++){
            if(i!=ind&&v[i]==v[i-1])
                continue;
             d.push_back(v[i]);
         fun(i+1,d,v,ans,n);
        d.pop_back();
        }
            
       
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        vector<vector<int>>ans;
        sort(v.begin(),v.end());
        int n=v.size();
        vector<int>d;
        fun(0,d,v,ans,n);
       
        return ans;
    }
};