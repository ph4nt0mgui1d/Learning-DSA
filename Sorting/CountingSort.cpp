// not a comparison based algo 
// counts the occurences of elements
// it can be linear time algo for small range of n
// time - O(n+k) where k in x*n or n/2 if k becomes nlogn or not linear then this algo is not useful 

//naive code
#include<bits/stdc++.h> 
using namespace std; 

void countSort(int arr[], int n, int k) { 
    int count[k];
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
        count[arr[i]]++;
        
    int index=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<count[i];j++){
            arr[index]=i;
            index++;
        }
    }
} 
  
int main() { 
    int arr[] = { 1,4,4,1,0,1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k=5;
    countSort(arr, n, k); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
    return 0; 
} 

// efficient solution (general purpose implementation)
#include<bits/stdc++.h> 
using namespace std; 

void countSort(int arr[], int n, int k) { 
    int count[k];
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
        count[arr[i]]++;
        
    for(int i=1;i<k;i++)
        count[i]=count[i-1]+count[i];
    
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
        arr[i]=output[i];
    
} 
  
int main() { 
    int arr[] = { 1,4,4,1,0,1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k=5;
    countSort(arr, n, k); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
    return 0; 
} 