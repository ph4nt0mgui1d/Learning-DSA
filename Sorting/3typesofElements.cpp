/*problem in which you need to segregate an array of elements containing three types of elements. The types are:

    Sort an array of 0s, 1s, 2s.
    Three-way partitioning when multiple occurrences of a pivot may exist.
    Partitioning around a range.
*/
//naive solution        time O(n)    space = O(n)
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int temp[n],i=0;
    
    for(int j=0;j<n;j++)
        if(arr[j]==0)
            temp[i++]=arr[j];
    for(int j=0;j<n;j++)
        if(arr[j]==1)
            temp[i++]=arr[j];
    for(int k=0;k<n;k++)
        if(arr[k]==2)
            temp[i++]=arr[k];
    for(int j=0;j<n;j++)
        arr[j]=temp[j];
    
}

int main() {
    int arr[]={0,1,1,2,0,1,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,n);	
	for(int x:arr)
	    cout<<x<<" ";
}

// efficent solution    (dutch national flag algo (variation of hoare's partition)) time = O(n) sapce= O(1)
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int l=0,h=n-1,mid=0;
    while(mid<=h){
        switch(arr[mid]){
            case 0:
                swap(arr[l],arr[mid]);
                l++;mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[h],arr[mid]);
                h--;
                break;
        }
    }
}

int main() {
    int arr[]={0,1,1,2,0,1,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,n);	
	for(int x:arr)
	    cout<<x<<" ";
}