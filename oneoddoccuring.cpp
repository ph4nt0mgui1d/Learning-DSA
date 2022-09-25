// number of occurence is odd
// naive method
// #include <iostream>
// using namespace std;

// int findOdd(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         int count = 0;

//         for(int j = 0; j < n; j++){          //time complexity = O(n^2)
//             if(arr[i] == arr[j])
//                 count++;
//         }

//         if(count % 2 != 0)
//             return arr[i];
//     }
// }
    
// int main(){
// 	int arr[]= {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = sizeof(arr)/sizeof(arr[0]);
//     cout<<findOdd(arr, n);
 
// }

//efficient method

// #include <iostream>
// using namespace std;

// int findOdd(int arr[], int n){
//     int res = 0;
//     for(int i = 0; i < n; i++){                               //time complexity = theta(n)
//         res = res ^ arr[i];                         //doing XOR operator on every element of array
//     }
//     return res;
// }
    
// int main() {
// 	int arr[]= {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = sizeof(arr)/sizeof(arr[0]);
//     cout<<findOdd(arr, n);
// }

//Variation Question --> Given an array of n elements that has a value range[1,n+1]. Every no. appears exactly once and hence one number is missing from the range. Find th missing number.
// #include<iostream>
// using namespace std;

// int find(int arr[], int n){
//     int res1 = 1, res2 = arr[0];

//     for(int i = 1; i <= n+1; i++){
//         res1 = res1 ^ (i);
//     }
//     for(int j = 0; j < n; j++){
//         res2 = res2 ^ arr[j];
//     }
    
//     return (res2 ^ res1) - n;
    
// }

// int main(){
//     int arr[] = {1, 2, 4, 5, 6}, n = sizeof(arr) / sizeof(arr[0]);
//     cout << find(arr, n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
// Function to get the missing number
int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
    return (x1 ^ x2);
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 2, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}