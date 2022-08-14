class Solution {
    typedef long long ll;
public:
    
    ll reverse(int x) {
        long long ans=0;
        int temp;
        while(x){
            if(ans>INT_MAX/10||ans<INT_MIN/10)
                return 0;
           temp=x%10;
            ans=ans*10+temp;
            x/=10;
            
        }
        
        return ans;
    }
};