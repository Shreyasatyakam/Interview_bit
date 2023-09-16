vector<string> Solution::deserialize(string A) {
    vector<string> res;
    string temp="";
    int n=A.length();
    for(int i=0;i<n;i++){
        if(isalpha(A[i])){
            temp+=A[i];
        }
        if(A[i]=='~'){
            res.push_back(temp);
            temp="";
        }
    }
    return res;
}
