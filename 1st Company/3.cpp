class Solution{
  public:
    
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {

        long long int i,j=0,p=1,sum=0;
        
        for(i=0;i<n;i++) {
            p *= a[i];
            
            while(p>=k && j<n) {
                p/=a[j];
                j++;
            }
            if(p<k) {
                sum+=(i-j+1);
            }
        }
        
        return sum;
    }
};