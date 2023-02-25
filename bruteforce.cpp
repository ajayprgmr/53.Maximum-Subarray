#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        int currSum = 0;
        for (int j = i; j < nums.size(); j++) {
            currSum += nums[j];
            maxSum = max(maxSum, currSum);
        }
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
