#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<int> arr = {-1 ,-2, -3, -4}; // a vector
    // maxSum to store max sum of elements
    // currSum store the two sub-array sum
    long long maxSum = INT_MIN, currSum = 0;  
    for (int i = 0; i < arr.size(); i++)
    {
    	currSum = currSum + arr[i];
    	if (maxSum < currSum) maxSum = currSum;
    	if (currSum < 0) currSum = 0;
    }
    cout<<maxSum<<endl;

    return 0;
}