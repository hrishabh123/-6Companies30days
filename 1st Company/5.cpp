class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> num(n);
        num[0] = 1;
        int x=0,y=0,z=0,i,k;
        
        for(i=1;i<n;i++) {
            num[i] = min({num[x]*2, num[y]*3, num[z]*5});
            // cout<<num[i]<<endl;
            if(num[i]==num[x]*2) {
                x++;
            } else if(num[i]==num[y]*3) {
                y++;
            } else {
                z++;
            }
            if(num[i]==num[i-1]) {
                i--;
                continue;
            }
        }
        return num[n-1];
    }
};