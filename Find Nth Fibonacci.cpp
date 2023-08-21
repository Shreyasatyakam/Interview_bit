vector<vector<long>> multiply(vector<vector<long>> mat1,vector<vector<long>> mat2){
    vector<vector<long>> ans(2,vector<long>(2,0));
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                ans[i][j]+=mat1[i][k]*mat2[k][j]%1000000007;
            }
        }
    }
    return ans;
}
vector<vector<long>> fnc(vector<vector<long>> a,int n){
    if(n==1)
    return a;
    
    vector<vector<long>>temp= fnc(a,n/2);
    if(n%2==0){
        return multiply(temp,temp);
    }
    return multiply(temp,multiply(temp,a));
}
int Solution::solve(int n) {
    vector<vector<long>> a={{1,1},{1,0}};
    vector<vector<long>> ans=fnc(a,n);
    return ans[0][1]%1000000007;
    
}
