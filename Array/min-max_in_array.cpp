#include<iostream>
using namespace std;

int getMin(int arr[], int arrSize){
    int res = arr[0];
    for(int i; i < arrSize; i++){
        // if(arr[i]<res){
        //     res = arr[i];                        //not working
        // }
        res = min(res, arr[i]);
    }
    cout << "The minimum elment of the array is: " << res << endl;
    
}

int getMax(int arr[], int arrSize){
    int res = arr[0]; 
    for(int i; i < arrSize; i++){
        // if(arr[i]>res){
        //     res = arr[i];                      //not working
        // }
        res = max(res, arr[i]);
    }
    cout << "The maximum element of the array is: " << res << endl;
    
}


int main(){
    int arr[] = {10,22,36,4,20,6};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    
    getMin(arr, arrSize);
    getMax(arr, arrSize);

    return 0;
}