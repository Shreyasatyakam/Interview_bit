string Solution::longestCommonPrefix(vector<string> &A) {
    int n=A.size();
    string ans="";
     
    for(int i=0;i<A[0].size();i++){
        char ch=A[0][i];
       bool match=true;
        for(int j=0;j<n;j++){
            if(A[j].size()<i||ch!=A[j][i]){
                match=false;
                break;
                
            }
        }
        if(match==false){
        break;
    }
    else{
        ans.push_back(ch);
    }
    }
    
    return ans;

    
}
