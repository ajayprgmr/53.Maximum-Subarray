#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
int maxSubArray(vector<int>& nums) {
    int maxSum =nums[0],cs=nums[0];
    for (int i = 1; i < nums.size(); i++) {
        cs=max(cs+nums[i],nums[i]);
        maxSum=max(maxSum,cs);
    }
    return maxSum;
}

int main() {
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int maxsum=maxSubArray(nums);
    cout<<maxsum;
}
