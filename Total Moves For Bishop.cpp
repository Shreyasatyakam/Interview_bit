int Solution::solve(int A, int B) {

    int x1=8-B, x2=8-A, x3=B-1, x4=A-1;

    return (min(x1,x2)+min(x2,x3)+min(x3,x4)+min(x4,x1));

}
