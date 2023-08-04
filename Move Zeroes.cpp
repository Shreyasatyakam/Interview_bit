vector<int> Solution::solve(vector<int> &A) {
   int n=A.size();
   vector<int> ans;
   int index=0;int zero=0;
   for(int i=0;i<n;i++){
       if(A[i]!=0){
           ans.push_back(A[i]);
       }
       else{
           zero++;
       }
   }
   for(int i=0;i<zero;i++){
       ans.push_back(0);
   }
   return ans;
}
