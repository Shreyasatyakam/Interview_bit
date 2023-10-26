vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A,A+N);
        sort(B,B+M);
        
        int i=0;
        
        vector<pair<int,int>>ans;
       
        
        while(i<N){
            pair<int,int>p;
            int j=0;
            while(j<M){
                if(A[i]+B[j]==X){
                p.first = A[i];
                p.second = B[j];
                ans.push_back(p);
                break;
            }
            else{
                j++;
            }
            }
            i++;
        }
        return ans;
    }
