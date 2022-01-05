class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        int i,j,k,p,n=string_list.size();
        
        map<string, vector<string>> m;
        vector<vector<string>> ans;
        for(i=0;i<n;i++) {
            string temp = string_list[i];
            sort(temp.begin(), temp.end());
            m[temp].push_back(string_list[i]);
        }
        
        for(auto it: m) {
            ans.push_back(it.second);
        }
        return ans;
    }
};