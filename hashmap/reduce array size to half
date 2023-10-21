//leetcode 1338
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> m;
        int count=0;
        for(auto x:arr){
            m[x]++;
        }
        multimap<int,int,greater<int>>mm;
        for(auto it:m){
            mm.insert({it.second,it.first});
        }
        int n=arr.size();
        int sum=n;
        for(auto it=mm.begin();it!=mm.end();it++){
            sum-=it->first;
            count++;
            if(sum<=n/2){
                return count;

            }

        }
        return count;
    }
    
};
