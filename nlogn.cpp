#include<bits/stdc++.h>
// #include "Myutilities.h"
using namespace std;
int maxCrossingSum(vector<int>& arr, int l, int m, int r) {
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum += arr[i];
        if (sum > left_sum)
            left_sum = sum;
    }
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m+1; i <= r; i++) {
        sum += arr[i];
        if (sum > right_sum)
            right_sum = sum;
    }
    return left_sum + right_sum;
}

int maxSubarraySum(vector<int>& arr, int l, int r) {
    if (l == r) {
        return arr[l];
    }
    int m = (l + r) / 2;
    return max(max(maxSubarraySum(arr, l, m), maxSubarraySum(arr, m+1, r)), maxCrossingSum(arr, l, m, r));
}

int main() {
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int maxsum=maxSubarraySum(nums,0,n-1);
    cout<<maxsum;
}
