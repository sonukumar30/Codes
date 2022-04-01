// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
   void fun(int i,int s,vector<int>&v,int n,vector<int>&ans){
       if(i==n){
           ans.push_back(s);
           return ;
       }
       s+=v[i];
       fun(i+1,s,v,n,ans);
       s-=v[i];
       fun(i+1,s,v,n,ans);
   }
public:
    vector<int> subsetSums(vector<int> a, int n)
    {
       vector<int>ans;
       int s=0;
       fun(0,s,a,n,ans);
       return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends