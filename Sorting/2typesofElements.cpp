/*
you need to segregate an array of elements containing two types of elements. The types are:
    Segregate negative and positive elements.
    Segregate even and odd elements.
    Sort a binary array.

this is basically a application of partition algorithms
*/

// naive code           (naive partition)  does 3 traversals of array     time = O(n)  space = O(n)
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int temp[n],i=0;
    
    for(int j=0;j<n;j++)
        if(arr[j]<0)
            temp[i++]=arr[j];
    for(int j=0;j<n;j++)
        if(arr[j]>=0)
            temp[i++]=arr[j];
    for(int j=0;j<n;j++)
        arr[j]=temp[j];
}

int main() {
    int arr[]={13,-12,18,-10};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,n);	
	for(int x:arr)
	    cout<<x<<" ";
}

// efficient code       (hoare's or lomuto)   only 1 traversal of array    time = O(n)     space = O(1)
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int i=-1,j=n;
    while(true){
        do{i++;}while(arr[i]<0);
        do{j--;}while(arr[j]>=0);
        if(i>=j)return;
        swap(arr[i],arr[j]);
    }
}

int main() {
    int arr[]={13,-12,18,-10};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,n);	
	for(int x:arr)
	    cout<<x<<" ";
}