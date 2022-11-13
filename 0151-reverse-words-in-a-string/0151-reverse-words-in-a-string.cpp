class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.size();
        stack<string>st;
        string s1,ans,t;
        
        for(int i=0;i<n;i++){
            if(s[i]==' '&& s1.size()>0){
                st.push(s1);
                s1.clear();
            }
            if(s[i]!=' ')
            s1.push_back(s[i]);
            
        }
        
         st.push(s1);
     
        while(st.size()){
            if(ans.size())
                 ans.push_back(' ');
            t=st.top();
            for(int i=0;i<t.size();i++){
                ans.push_back(t[i]);
             }
            st.pop();
        }
        
        
        return ans;
        
        
        
    }
};