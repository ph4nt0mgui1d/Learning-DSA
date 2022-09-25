//best algo in terms of memory writes
//inplace and not stable 
//worst case time = O(n^2)
//Used to solve questions like : find minimum swaps req to sort the given arr.
//assumed that all the elements are distinct

#include<bits/stdc++.h> 
using namespace std; 

void cycleSortDistinct(int arr[], int n) { 
    for(int cs=0;cs<n-1;cs++){
        int item=arr[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++)
            if(arr[i]<item)
                pos++;
        swap(item,arr[pos]);
        while(pos!=cs){
            pos=cs;
            for(int i=cs+1;i<n;i++)
                if(arr[i]<item)
                    pos++;
            swap(item,arr[pos]);
        }
    }
} 
  
int main() { 
    int arr[] = { 20,40,50,10,30 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cycleSortDistinct(arr, n); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
    return 0; 
} 