
class Solution {
  public:
    int findPosition(int N , int M , int K) {
        if(K+M-1<=N) {
            return K+M-1;
        }
        
    
        M -= (N-K+1);
        // cout<<M<<" "<<N<<" "<<M%N<<endl;
        // while(M>=N) {
        //     M-=N;
        // }
        M = M% N;
        // cout<<M<<endl;
        if(M==0) {
            return N;
        }
        return M;
    }
};