int Solution::titleToNumber(string A) {
    int result=0;
    for(int i=0;i<A.size();i++){
        result*=26;
        result+=A[i]-'A'+1;
    }
    return result;
}
