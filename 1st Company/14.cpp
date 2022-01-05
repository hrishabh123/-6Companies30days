class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l,r,m=0,i,j,k=0,count=INT_MAX;
        
        j=0;
        for(i=0;i<nums.size();i++) {
            k += nums[i];
            
            if(k>=target) {
                // count = min(count, i-j+1);
                while(k>=target) {
                    // cout<<i<<" "<<j<<" "<<k<<endl;
                    count = min(count, i-j+1);
                    k -= nums[j];
                    j++;
                }
                // j--;
            }
        }
        if(count==INT_MAX) return 0;
        return count;
    }
};