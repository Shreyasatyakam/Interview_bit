int Solution::power(string A) {
   long double  t=stold(A);
    if(t==1)return 0;
    return floor(log2(t))==ceil(log2(t));
    
}
