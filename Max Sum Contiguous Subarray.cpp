int Solution::maxSubArray(const vector<int> &A) {
  int n=A.size();
  int maxsum=A[0];
  int cursum=0;
  for(int i=0;i<n;i++){
      cursum+=A[i];
      if(cursum>maxsum){
          maxsum=cursum;
      }
      if(cursum<0){
      cursum=0;
  }
  }  
  
  return maxsum;
}
