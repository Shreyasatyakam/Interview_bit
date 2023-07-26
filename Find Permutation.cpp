vector<int> Solution::findPerm(const string A, int B) {
    int s=1;
    int l=B;
    vector<int> v;
    
    int n=A.size();
    for(int i=0;i<=n;i++){
        if(A[i]=='I'){
            v.push_back(s);
            s++;
        }
        else{
            v.push_back(l);
            l--;
        }
    }
    return v;
}
