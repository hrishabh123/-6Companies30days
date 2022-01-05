class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        map<int,int> m;
        int i,j,p;
        
        for(i=0;i<nums.size();i++) {
            m[nums[i]%k]++;
        }
        bool check=true;
        for(i=0;i<=(k/2);i++) {
            if(i==0 && m[i]%2!=0) {
                check=false;
                break;
            } 
            if(i!=0) {
                if(m[i]!=m[k-i]) {
                    check=false;
                }
            }
        }
        
        return check;
    }
};