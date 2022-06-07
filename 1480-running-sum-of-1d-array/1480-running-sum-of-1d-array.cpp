class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        vector<int>v1;
           v1.push_back(v[0]);
        for(int i=1;i<v.size();i++){
            v1.push_back(v1[i-1]+v[i]);
        }
        
        return v1;
    }
};