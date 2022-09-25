#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int low = 0, high = 4;
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for(int i = 0; i<5;i++){
        cout << arr[i];
    }
    return 0;
}

// 2 more methods to study
//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/