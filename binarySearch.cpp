#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int arrsize, int num)
{
    int start = 0;
    int end = arrsize;

    while(start<=end){
        int mid = (start+end)/2;

        if(arr[mid]==num){
            return mid;
        }
        else if (arr[mid]>num) { 
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
    
}

int main(){

    // array size
    int arrsize;
    cin>>arrsize;

    // init array
    int arr[arrsize];

    // taking input for array
    for (int i = 0; i < arrsize; i++)
    {
        cin>>arr[i];
    }

    // array size
    int num;
    cin>>num;
    
    // calling the function
    int ans = binarySearch(arr, arrsize, num);
    cout<<ans;

    return 0;
}
