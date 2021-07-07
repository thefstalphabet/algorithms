#include<iostream>

using namespace std;

// function
void selectionSort(int arr[], int arrsize){
    for (int i = 0; i < arrsize-1; i++)
    {
        for (int j = i+1; j < arrsize; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
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
    selectionSort(arr, arrsize);
    


    return 0;
}
