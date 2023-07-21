int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
        int i = 0;
        int count = 0;
        while(i < n) {
            bool isBulbLighted = false;
            int lr = max(i - B + 1, 0);
            int rr = min(i + B - 1, n - 1);
            // 0, 0, 1, 0, 1, 0, 0, 1

            for(int j = rr; j >= lr; j--) {
                if(A[j] == 1) {
                    count++;
                    i = j;
                    i += B;
                    isBulbLighted = true;
                    break;
                }
            }
            
            if(!isBulbLighted) {
                return -1;
            }
        }
        return count;
}
