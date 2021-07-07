#include<iostream>

using namespace std;

// function linearsearch
int linearSearch(int arr[], int arrsize, int num){
    // loop
    for (int i = 0; i < arrsize; i++)
    {
        if (arr[i]==num)
        {
            return i;
        }
        
    }
    return -1;
    
}

int main(){

    // sizeofarray
    int arrsize;
    cin>>arrsize;

    // int array
    int arr[arrsize];

    // taking input for array
    for (int i = 0; i < arrsize; i++)
    {
        cin>>arr[i];
    }

    // num for find
    int num;
    cin>>num;

    // calling the function
    cout<<linearSearch(arr, arrsize, num);
    


    return 0;
}
