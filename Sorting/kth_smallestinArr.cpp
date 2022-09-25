// naive solution           time = O(nlogn)       space = O(n)
// this solution modifies the original array if that is not allowd in the question the use the efficient solution
#include<iostream>
// #include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {30,20,5,10,8}, k =4, n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    cout << arr[k-1];
    return 0;
}

// efficient solution           (quick select)  time = O(n^2) in worst case but (constant or linear time in avg case)
// this algo is best prefered for this solution 
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{   
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int kthSmallest(int arr[],int n,int k){
    int l=0,r=n-1;
    while(l<=r){
        int p=partition(arr,l,r);
        if(p==k-1)
            return p;
        else if(p>k-1)
            r=p-1;
        else
            l=p+1;
    }
    return -1;
}
 
int main() {
    int arr[]={10,4,5,8,11,6,26};
	int n=sizeof(arr)/sizeof(arr[0]);int k=5;
	int index=kthSmallest(arr,n,k);	
	cout<<arr[index];
	
}