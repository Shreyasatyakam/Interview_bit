int Solution::solve(vector<int> &A) {
    int n=A.size();
    int maxi=A[0];
    int mini=A[0];
   for(int i=0;i<n;i++){
        mini=min(A[i],mini);
        maxi=max(A[i],maxi);
   }
   return maxi+mini;
}
