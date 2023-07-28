void Solution::rotate(vector<vector<int> > &A) {
   int n= A.size();
   // Taking Transpose Of the matrix
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           swap(A[i][j],A[j][i]);
       }
   }
   // Flipping
   int j=0;
   while(j<n/2){
   for(int i=0;i<n;i++){
       swap(A[i][j],A[i][n-j-1]);
   }
   j++;
   }
}
