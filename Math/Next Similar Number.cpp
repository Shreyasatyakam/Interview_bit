string Solution::solve(string A) {
    int n = A.size();
    int pos=-1;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        return "-1";
    }
    int pos2=-1;
    for(int i=n-1;i>pos;i--){
        if(A[i]>A[pos]){
            pos2=i;
            break;
        }
    }
    swap(A[pos],A[pos2]);
    sort(A.begin()+pos+1,A.end());
    return A;
}
