/*
quick sort and merge sort are very similar to each other.
they both have divide and conquer strategy
quick sort have worst case time = O(n^2) but still it is considered faster then merge sort because
    it is a inplace algo
    it is cache friendly
    avg case time is O(nlogn)
    it is tail recursive 
partition is key function:-- 
    in merge sort the merge function is the key function in merge sort but in quicksort partition is key function
    in merge sort the arr is divided into half and then those two halves are sorted but in quick sort the arr is 
    divided into partitions using the 3 partitioning methods(naive, lomuto, hoare)
    out of the 3 only naive is stable but it has more time complexity then the other methods so quick sort is used
    when stability doesnt matter and hence the lomuto and hoare's patition is used.

when stability is not important then quick sort is fastest algo but if stability matters the merge sort is used 


when the user uses a sorted array then hoare and lomuto partition run into worst cases to avoid that modify the 
function to first genrate a random pivot and then swipe it with last element (in lomuto) or first element(in hoare)
when a sorted array is used the partitioning happens as follows:
    largest element is at its correct positoin already as is smallest element and the two partion consist of 0 
    elements at one side and n-1 element on the other which is the worst case.
*/
// using lomuto partition
#include <bits/stdc++.h>
using namespace std;

int iPartition(int arr[], int l, int h){   
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

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=iPartition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}
 
int main() {
    int arr[]={8,4,7,9,3,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	qSort(arr,0,n-1);	
	for(int x: arr)
	    cout<<x<<" ";
}

// using hoare's partition
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h){   
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        qSort(arr,l,p);
        qSort(arr,p+1,h);
    }
}
 
int main() {
    int arr[]={8,4,7,9,3,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	qSort(arr,0,n-1);	
	for(int x: arr)
	    cout<<x<<" ";
}

// tail call elemination
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h){   
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}

void qSort(int arr[],int l,int h){
    Begin:
    if(l<h){
        int p=partition(arr,l,h);
        qSort(arr,l,p);
        l=p+1;
        goto Begin;
    }
}
 
int main() {
    int arr[]={8,4,7,9,3,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	qSort(arr,0,n-1);	
	for(int x: arr)
	    cout<<x<<" ";
}