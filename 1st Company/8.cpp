class Solution {
public:
    int solver(string s, int pos, vector<int> &dp) {
        if(pos>=s.size()) return 1;
        
        if(dp[pos]==-1) {
            string temp;
            int i,j,n,k,count=0;
            temp.push_back(s[pos]);
            if(stoi(temp)==0) return 0;

            n = stoi(temp);
            if(n>=1 && n<=26) {
                // cout<<n<<endl;
                count += solver(s,pos+1,dp);
            }

            for(i=pos+1;i<s.size();i++) {
                temp.push_back(s[i]);
                n = stoi(temp);
                if(n>=1 && n<=26) {
                    // cout<<n<<endl;
                    count += solver(s,i+1,dp);
                } else break;
            }
            dp[pos] = count;
        }
        
        return dp[pos];
    }
    
    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        
        
        return solver(s,0,dp);
    }
};