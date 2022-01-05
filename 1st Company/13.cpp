class Solution{
public:
    // string solver(string s)
    
    string decodedString(string s){
        int i,j,k,p;
        
        stack<char> st;
        
        for(i=0;i<s.size();i++) {
            
            if(s[i]==']') {
                string temp;
                while(st.top()!='[') {
                    temp.push_back(st.top());
                    st.pop();
                }
                reverse(temp.begin(),temp.end());
                st.pop();
                
                string num="";
                while(isdigit(st.top()))
                {    num=st.top()+num;
                     st.pop();
                     if(st.empty()){
                         break;
                     }
                }
                
                p = stoi(num);
                string temp2 = temp;
                for(j=0;j<p-1;j++) {
                    temp += temp2;
                }
                
                for(j=0;j<temp.size();j++) {
                    st.push(temp[j]);
                }
            } else {
                st.push(s[i]);
            }
        }
        string ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};