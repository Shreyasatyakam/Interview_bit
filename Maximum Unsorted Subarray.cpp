vector<int> Solution::subUnsort(vector<int> &A) {
    int n=A.size();
    int l=-1,r=-1;
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(A[i]<A[i-1]){
            r=i;
            break;
        }
    }
    if(l==-1){
        ans.push_back(l);
        return ans;
    }
    
    int minval=INT_MAX,maxval=INT_MIN;
    for(int i=l;i<=r;i++){
        minval=min(A[i],minval);
        maxval=max(A[i],maxval);
    }
    for(int i=0;i<l;i++){
        if(A[i]>minval){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=r+1;i--){
        if(A[i]<maxval){
            r=i;
            break;
        }
    }
    ans.push_back(l);
    ans.push_back(r);
    return ans;
}
