#include<bits/stdc++.h>
#include "Myutilities.h"
using namespace std;
int CMS(vector<int>& arr) {
  int s=0,e=arr.size()-1;
  int m=(s+e)/2;
  int LBI=-1,RBI=m+1;
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= 0; i--) {
        sum += arr[i];
        if (sum > left_sum){
          left_sum = sum;
          LBI=i;
        }
            
    }
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m+1; i <= e; i++) {
        sum += arr[i];
        if (sum > right_sum){
          right_sum = sum;
          RBI=i;
        }
            
    }
    int crossmax=INT_MIN,temp_sum=0;
    
    for(int i=LBI;i<=RBI;i++){
      temp_sum=temp_sum + arr[i];
      if(temp_sum>crossmax) crossmax=temp_sum;
    }
    return max(max(left_sum,right_sum),crossmax);
}

int main() {
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int maxsum=CMS(nums);
    cout<<maxsum;
}
