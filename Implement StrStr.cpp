int Solution::strStr(const string A, const string B) {
    if(A.size()==0 ||B.size()==0){
        return 0;
    }
    if(B.size()>A.size()){
        return -1;
    }
    for(int i=0;i<A.size();i++){
        if(A[i]==B[0]){
            if(A.substr(i,B.size())==B){
                return i;
            }
        }
    }
    return -1;
}
