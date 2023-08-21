#include<bits/stdc++.h>
int findDays(vector<int> &A,int mid){
    int load=0;
    int days=1;
    for(int i=0;i<A.size();i++){
        if(A[i]+load>mid){
            days++;
            load=A[i];
        }
        else{
            load+=A[i];
        }
    }
    return days;
}

int Solution::solve(vector<int> &A, int B) {
    int low=*max_element(A.begin(),A.end());
    int high=accumulate(A.begin(),A.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int numberOfDays=findDays(A,mid);
        if(numberOfDays<=B){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

