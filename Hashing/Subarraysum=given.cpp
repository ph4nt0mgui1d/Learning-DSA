// Naive solution               time = O(n^2)
#include<bits/stdc++.h>
using namespace std;

bool subarrsum(int arr[], int n, int sum){
    for(int i = 0; i<n; i++){
        int curr_sum = 0;
        for(int j = i; j<n; j++){
            curr_sum += arr[j];
            if(curr_sum == sum)
                return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {1,2, 7,4,45,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 12;
    cout << subarrsum(arr, n, sum);
}