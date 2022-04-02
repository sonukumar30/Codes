class Solution {
public:
    void fun(int i,vector<int>&d,vector<int>&v,set<vector<int>>&ans,int n){
        if(i==n){
            
            ans.insert(d);
            return ;
        }
        d.push_back(v[i]);
         fun(i+1,d,v,ans,n);
        d.pop_back();
         fun(i+1,d,v,ans,n);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        set<vector<int>>ans;
        sort(v.begin(),v.end());
        int n=v.size();
        vector<int>d;
        fun(0,d,v,ans,n);
        vector<vector<int>>ans1;
        for(auto it:ans){
            ans1.push_back(it);
        }
        return ans1;
    }
};