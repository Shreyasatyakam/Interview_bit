int Solution::lengthOfLastWord(const string A) {
    int count=0;
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]!=' '&&(A[i]>='a' && A[i]<='z')||(A[i]>='A'&&A[i]<='Z')){
            count++;
        }
        else if(A[i]==' '&&count>0){
            break;
        }
    }
    return count;
}
