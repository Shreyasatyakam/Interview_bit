bool mysort(string s,string r){
    return s+r>r+s;
}
string Solution::largestNumber(const vector<int> &A){
    vector<string>str;
    int m=0;
    for(int i=0;i<A.size();i++){
        string s;
        s = to_string(A[i]);
        str.push_back(s);
    }
    sort(str.begin(),str.end(),mysort);
    string s;
    for(int i=0;i<str.size();i++){
        s+=str[i];
    }
    int i=0; 
    while(s[i]=='0'&&i+1<s.size()){
        i++;
    }
    return s.substr(i);
}
