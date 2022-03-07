class Solution {
public:
    int searchInsert(vector<int>& v, int t) {
        int s=v.size();
        if(t>v[s-1])
            return s;
        else{
            int l,h,m,f;
            l=0;
            h=s-1;
            while(l<=h){
                m=l+(h-l)/2;
                if(v[m]==t)
                    return m;
                else if(t<v[m]){
                    h=m-1;
                    f=1;
                }
                else{
                    l=m+1;
                    f=0;
                }
            }
            
            if(f==0)
            return m+1;
            else
               return m;
        }
            
    }

};