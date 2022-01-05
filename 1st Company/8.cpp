class Solution {
public:
    int numDecodings(string s) {
        unordered_map<int, int> Table;
        return dfs(Table, s, 0);
    }
    int dfs(unordered_map<int, int>& Table, string s, int pos){
        if(pos == s.length()) return 1;
        if(pos > s.length()) return 0;
        if(s[pos] == '0') return 0;

        
        int a = stoi(s.substr(pos, 2));
        
        if(Table.find(pos) != Table.end()){
            return Table[pos];
        }
        
        Table[pos] = dfs(Table, s, pos+1);
        if(a<= 26){
            Table[pos] = Table[pos]+dfs(Table, s, pos+2);
        }

        return Table[pos];
    }
};