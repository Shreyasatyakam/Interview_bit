bool check(vector<int> v, int x, int y)
 {
    for(auto i: v) {
        if(i-x==y || i+x==y || i==y) {}
        else return false;
    }
    return true;
}
int Solution::solve(vector<int> &A, int B) 
{
    int n;
    n=A.size();
    vector<int> v=A;
    
    int x; x=B;
    if(check(v,x,v[0]) || check(v,x,v[0]-x) || check(v,x,v[0]+x)) return 1;
    else return  0;
    
}
