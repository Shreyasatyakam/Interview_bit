int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    int minindex=INT_MAX;
    int ans=0;
    vector<pair<int,int>> p;
    if(n==1){
        return 0;
    }
    for(int i=0;i<n;i++){
        p.push_back({A[i],i});
    }
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++){
        minindex=min(minindex,p[i].second);
        ans=max(ans,p[i].second-minindex);
    }
    return ans;
    
}
