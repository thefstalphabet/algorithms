#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int x){

    // starting point and ending point
    int l = 0;
    int r = n-1;

    while (l<=r){
        int mid = (l+r)/2;

        if (arr[mid]==x) return mid;

        if (arr[mid]<x) l = mid+1;

        else {
            r = mid-1;
        }
    }

    return -1;



}

int main (){

    // array lenggth and array init
    int n,x;
    cin>>n>>x;
    int arr[n];

    // taking input of array
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<binarySearch(arr,n,x);

}