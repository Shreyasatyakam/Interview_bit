vector<int> Solution::plusOne(vector<int> &A) {
    int idx=A.size()-1;
    while(idx>=0){
        if(A[idx]==9){
            A[idx]=0;
        }
        else{
            A[idx]+=1;
            return A;
        }
        idx--;
    }
    A.insert(A.begin(),1);
    return A;
}
