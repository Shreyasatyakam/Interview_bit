int Solution::romanToInt(string s) {
   map<char,int> mps{
mps['I'] = 1;
mps['V'] = 5;
mps['X'] = 10;
mps['L'] = 50;
mps['C'] = 100;
mps['D'] = 500;
mps['M'] = 1000;
int result = 0;
for(int i=0;i<s.size();i++){
if(mps[s[i]]<mps[s[i+1]]){
result -= mps[s[i]];
}
else{
result += mps[s[i]];
}
}
return result;
} 
}

