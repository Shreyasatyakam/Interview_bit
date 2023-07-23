vector<vector<int> > Solution::generateMatrix(int A) {
    int n=  A;
    vector<vector<int>> v(n,vector<int> (A,0));
    int row_start =0;
    int row_end = n-1;
    int col_start= 0;
    int col_end = n-1;
   
   
    int sum=1;
    while(sum<=n*n){
    for(int i=col_start;i<=col_end;i++){
        v[row_start][i] = sum;
        sum+=1;
    }
    row_start+=1;
    for(int i=row_start;i<=row_end;i++){
        v[i][col_end] = sum;
        sum+=1;
    }
    col_end-=1;
    for(int i=col_end;i>=col_start;i--){
        v[row_end][i] = sum;
        sum+=1;
    }
    row_end-=1;
    for(int i=row_end;i>=row_start;i--){
        v[i][col_start] = sum;
        sum+=1;
    }
    col_start+=1;
    }
    return v;
   
}
