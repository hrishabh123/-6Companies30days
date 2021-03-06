class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        int u1,l1,u2,l2,r1,r2,le1,le2;
        
        u1 = L1[1];
        l1 = R1[1];
        u2 = L2[1];
        l2 = R2[1];
        
        r1 = R1[0];
        r2 = R2[0];
        le1 = L1[0];
        le2 = L2[0];
        
        if(min(r1,r2)>=max(le1,le2) && min(u1,u2)>=max(l1,l2)) {
            return 1;
        }
        return 0;
    }
};