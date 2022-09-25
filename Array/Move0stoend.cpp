// //naive solution            time complexity = O(n^2)
// #include<bits/stdc++.h>
// using namespace std;

// void moveTOend(int arr[], int n){
//     for(int i = 1; i<n; i++){
//         if(arr[i] == 0){
//             for(int j = i+1; j<n; j++){
//                 if(arr[j] != 0)
//                     swap(arr[i], arr[j]);
//             }
//         }
//     }
// }
// int main(){
//     int arr[] = {1,2,0,3,2,0,0,2,45};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     moveTOend(arr, n);
//     for(int k = 0; k<n; k++){
//         cout<<arr[k]<<"  ";
//     }
//     return 0;
// }

//efficient solution            time complexity = O(n)
#include<iostream>
using namespace std;

void moveTOend(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main(){
    int arr[] = {1,2,0,3,2,0,0,2,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveTOend(arr, n);
    for(int k = 0; k<n; k++){
        cout<<arr[k]<<"  ";
    }
    return 0;
}