vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
    int n1=A.size();
    int n2=B.size();
    int carry=0;
    vector<int> sol;
    int j1=n1-1;
    int j2=n2-1;
    while(j1>=0 &&j2>=0){
        int x=A[j1]+B[j2]+carry;
        if(x>=10)carry=1;
        else carry=0;
        sol.push_back(x%10);
        j1--;
        j2--;
    }
    while(j1>=0){
        int x=A[j1]+carry;
        if(x>=10)carry=1;
        else carry=0;
        sol.push_back(x%10);
        j1--;
    }
     while(j2>=0){
        int x=B[j2]+carry;
        if(x>=10)carry=1;
        else carry=0;
        sol.push_back(x%10);
        j2--;
    }
    if(carry)sol.push_back(1);
    reverse(sol.begin(),sol.end());
    return sol;
}
