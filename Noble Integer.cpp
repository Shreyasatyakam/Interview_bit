int Solution::solve(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    if(A[A.size()-1]==0)
    return 1;
    for(int i=0;i<n;i++){
        if(A[i]<A[i+1]&&A[i]==A.size()-i-1&& i+1<A.size()){
            return 1;
        }
    }
    
    return -1;
}
