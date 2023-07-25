int Solution::firstMissingPositive(vector<int> &arr) {
    int n=arr.size(),i;
     
   for(int i=0;i<n;i++)
        {
            int ele = arr[i];
            int chair = arr[i]-1 ;
            
            if( arr[i]>0 && arr[i]<=n && arr[chair]!=ele)
            {
                // fking need to add arr[i]>0 && arr[i]<=n so that we dont acces outof bound indexes
                swap(arr[chair],arr[i]);
                i--;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(i+1 != arr[i] )return i+1;
        }
        
        return n+1;
}
