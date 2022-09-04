class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n=v.size();
        if(n<3)
            return 0;
        int l1=0,h1=n-1,m1=0;
        while(l1<h1){
            m1=l1+(h1-l1)/2;
            if(v[m1]>v[m1-1]&&v[m1]>v[m1+1]&&m1+1<n&&m1-1>=0)
                break;
            else if(v[m1]>v[m1-1]&&v[m1]< v[m1+1]&&m1+1<n&&m1-1>=0)
                l1=m1+1;
            else if(v[m1]<v[m1-1]&&v[m1]> v[m1+1]&&m1+1<n&&m1-1>=0)
                h1=m1;
        }
        return m1;
    }
};