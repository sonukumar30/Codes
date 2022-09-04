class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n=v.size();
       
        int l1=0,h1=n-1,m1=0;
        while(l1<h1){
            m1=l1+(h1-l1)/2;
            if(v[m1]>v[m1-1]&&v[m1]>v[m1+1])
                break;
            else if(v[m1]>v[m1-1]&&v[m1]< v[m1+1])
                l1=m1+1;
            else 
                h1=m1;
        }
        return m1;
    }
};