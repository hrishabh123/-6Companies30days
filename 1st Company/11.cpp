class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        sort(arr, arr+n);
        int *ans=new int[2];
        int i,j,k;
        bool check=false;
        
        vector<int> v;
        v.push_back(arr[0]);
        for(i=1;i<n;i++) {
            // cout<<i<<endl;
            if(arr[i]==arr[i-1]) {
                ans[0]=arr[i];
                k=i-1;
            } else {
                v.push_back(arr[i]);
            }
        }
        
        for(i=0;i<v.size();i++) {
            if(v[i]!=i+1) {
                ans[1] = i+1;
                check=true;
                break;
            }
        }
        if(!check) {
            ans[1]=v.size()+1;
        }
        return ans;
    }
};