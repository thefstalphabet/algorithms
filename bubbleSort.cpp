#include<iostream>

using namespace std;

// function
void bubbleSort(int arr[], int arrsize){

    int count = 1;
    while (count<arrsize)
    {
        for (int i=0; i < arrsize-count; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        count++;
    }
    

    // printing the array
    for (int i = 0; i < arrsize; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main (){

    // arrsize;
    int arrsize;
    cin>>arrsize;

    // init array
    int arr[arrsize];

    // taking input for the array
    for (int i = 0; i < arrsize; i++)
    {
        cin>>arr[i];
    }

    // calling the array
    bubbleSort(arr, arrsize);
    


    return 0;
}
