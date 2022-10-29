class Solution {
public:
    int maxProduct(vector<int>& v) {
       int n=v.size();
        int p1=v[0],p2=v[0],ans=v[0],t;
        for(int i=1;i<n;i++){
            t=max({v[i],p1*v[i],p2*v[i]});
            p2=min({v[i],p1*v[i],p2*v[i]});
            p1=t;
            ans=max(ans,p1);
        }
        return ans;
    }
};