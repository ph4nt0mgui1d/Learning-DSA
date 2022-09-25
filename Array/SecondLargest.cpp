//return the position of the second largest number in an array
//naive approach            time complexity = theta(n)
//two traversals of the array
// #include<iostream>
// using namespace std;

// int getLargest(int arr[], int n){
//     int largest = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[largest]<arr[i])
//             largest = i;
//     }
//     return largest;
// }

// int getSecLargest(int arr[], int n){
//     int largest = getLargest(arr, n);
//     int res = -1;
//     for(int i = 0; i<n; i++){
//         if(arr[i]!=arr[largest]){
//             if(res == -1)
//                 res = i;
//             else if (arr[i] > arr[res])
//                 res = i;   
//         }
//     }
//     return res;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << getLargest(arr, n) << endl;
//     cout << getSecLargest(arr, n) << endl;
//     return 0;
// }

//efficient solution
//one traversal of the array

#include<iostream>
using namespace std;

int getSecLargest(int arr[], int n){
    int res = -1, largest = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if (arr[i]!=arr[largest]){
            if(res == -1 || arr[i]>arr[res])
                res = i;
        }
    }
    return res;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << getSecLargest(arr, n) << endl;
    return 0;
}
