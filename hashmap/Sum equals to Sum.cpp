//gfg
class Solution
{
  public:
    int findPairs(long long a[], long long n)
    {
        unordered_map<long long,int>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mp[a[i]+a[j]]++;
                if(mp[a[i]+a[j]]>1)
                return 1;
            }
        }
        return 0;
    }
};
