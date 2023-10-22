vector<int> Solution::lszero(vector<int> &A) {
    unordered_map<int,int>mp;
    mp[0]=-1;
    int sum=0;
    int length=0;
  
    int x=0,y=0;
    for (int i=0;i<A.size();i++){
        sum=sum+A[i];
        if (mp.find(sum)!=mp.end()){
            if (i-mp[sum]>length){
                length=i-mp[sum];
                x=mp[sum];
                y=i;
            }
           
        }
        else mp[sum]=i;
      
    }
    vector<int> ans;
    for(int i=x+1;i<=y;i++){
        ans.push_back(A[i]);
    }
    return ans;
}
