class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i,j,k,p;
        string prefix;
        
        for(i=0;i<min(str1.size(), str2.size()); i++) {
            if(str1[i]==str2[i]) {
                prefix.push_back(str1[i]);
            } else {
                break;
            }
        }
        
        if(!prefix.size()) return prefix;
        
        k = prefix.size();
        while(k) {
            string s = prefix.substr(0,k);
            j=0;
            bool check=true;
            for(i=0;i<str1.size();i++) {
                if(str1[i]!=s[j]) {
                    check=false;
                    break;
                }
                j++;
                if(j>=s.size()) j=0;
            }
            if((!check) || (j!=0)) {
                k--;
                continue;
            }
            j=0;
            bool check1=true;
            for(i=0;i<str2.size();i++) {
                if(str2[i]!=s[j]) {
                    check1=false;
                    break;
                }
                j++;
                if(j>=s.size()) j=0;
            }
            
            if(!check1 || j!=0) {
                k--;
                continue;
            } else {
                return s;
            }
            
            k--;
        }
        
        return "";
    }
};