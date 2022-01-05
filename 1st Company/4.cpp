string encode(string src)
{     
    int i,j,k=1,p;
    char ch=src[0];
    string ans;
    ans.push_back(ch);
    
    for(i=1;i<src.size();i++) {
        if(ch==src[i]) {
            k++;
        } else {
            // cout<<k<<endl;
            // char o = k;
            // cout<<o<<endl;
            // ans.push_back(o);
            ans = ans + to_string(k);
            // cout<<ans<<endl;
            k = 1;
            ch = src[i];
            ans.push_back(ch);
        }
    }
    if(k!=0) {
       ans = ans + to_string(k);
    }
    return ans;
}     
 