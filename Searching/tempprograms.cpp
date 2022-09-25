#include<iostream>
using namespace std;

int countOcc(int arr[], int x, int n){
    int low = 0, high = n-1, count = 0, temp =1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > x)
            high = mid-1;
        else if (arr[mid] < x)
            low = mid+1;
        
        else{
            count++;
            low = mid-1;
            high = mid+1;
            while(low>=0||high<=(n-1)){
                temp++;
                if(arr[low] == x && arr[high] == x){
                    count = count+2;
                    low = mid-temp;
                    high = mid+temp;
                }
                else if(arr[high] == x){
                    count++;
                    low = mid-temp;
                    high = mid+temp;
                }
                else if(arr[low] == x){
                    count++;
                    low = mid-temp;
                    high = mid+temp;
                }
                else
                    break;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {1,2,2,3,3,3,3,4,5};
    int n = 9;
    cout << countOcc(arr, 3, n);
    return 0;
}