#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // a vector
    int maxSum = nums[0]; // maxSum of elements
        int currSum = 0; // currSum store the current sum of two element
        for (int i=0; i<nums.size(); i++){
            currSum +=nums[i];
            if(currSum>maxSum) maxSum=currSum;
            if(currSum<0) currSum=0;
        }
        cout<<maxSum<<endl;
    return 0;
}