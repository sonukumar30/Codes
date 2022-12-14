class Solution {
public:
    void heap1(vector<int>&h,int n){
       h.push_back(n);
       int i=h.size()-1;
        while(i/2>0&&h[i/2]<h[i]){
              
                   swap(h[i/2],h[i]);
            
                i/=2;
            }
           
    }

int heap2(vector<int>&h){
    int n=h.size()-1;
     int ans=h[1];
   if(n>0){
  
   
   swap(h[1],h[n]);
    
   h.pop_back();
   n--;
   int k=1;

   while(2*k<=n || 2*k+1<=n){
     int f=0;
     int lval=INT_MIN,rval=INT_MIN;
     if(2*k<=n)lval=h[2*k];
     if(2*k+1<=n)rval=h[2*k+1];

     if(lval>=rval)f=1;
     if(rval>lval) f=2;
     if(f==1&&lval>h[k]){
    
      swap(h[2*k],h[k]);
      
        k*=2;
     }
     else if(f==2&&rval>h[k]){
      swap(h[2*k + 1],h[k]);
        k=2*k+1;
     }
     else break;
    
   }
  
   
}
  return ans;
}
    
    int lastStoneWeight(vector<int>& v) {
       int n=v.size();
        vector<int>h(1);
      for(int i=0;i<n;i++){
           heap1(h,v[i]);
        }
        //debug(h)
    int x=h.size()-1;
      while(x>1){
          int t1=heap2(h);
          int t2=heap2(h);
          x-=2;
         
              int t3=abs(t1-t2);
               heap1(h,t3);
              x+=1;
          
      }  
        
        return h[1];
        
    }
};