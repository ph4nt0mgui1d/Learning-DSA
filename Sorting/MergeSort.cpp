/*divide and conquer algo (divide, conquer and merge)
stable algo
theta(nlog n) (best possible time on a single processor on random input) and O(n) aux space (not in-place)
well suited for linked lists works in O(1) aux space
used in external sorting 
there are variants of merge sort
    block merge sort --> works in nlogn time an is in-place algo

in general for arrays, quick sort outperforms it
*/

//MERGE TWO SORTED ARRAYS
// //naive solution                    O((m+n)*log(m+n))   space = thta(m+n)
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void merge(int a[], int b[], int m, int n){
    
//     int c[m+n];
//     for(int i=0;i<m;i++)
//         c[i]=a[i];
//     for(int j=0;j<n;j++)
//         c[j+m]=b[j];
    
//     sort(c,c+m+n);
    
//     for(int i=0;i<m+n;i++)
//         cout<<c[i]<<" ";
// }

// int main() {
	
//     int a[]={10,15,20,40};
//     int b[]={5,6,6,10,15};
	
// 	int m=sizeof(a)/sizeof(a[0]);
// 	int n=sizeof(b)/sizeof(b[0]);
// 	merge(a,b,m,n);
// }

//efficient solution                    O(m+n)
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void merge(int a[], int b[], int m, int n){
    
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(a[i]<=b[j]) {                        //<= to make the algo stable
//             cout<<a[i]<<" ";
//             i++;
//         }
//         else{
//             cout<<b[j]<<" ";
//             j++;
//         }
//     }
//     while(i<m){
//         cout<<a[i]<<" ";
//         i++;   
//     }                                           //i++ in a different line is equivalent to a[i++]
//     while(j<n)          
//         cout<<b[j++]<<" ";    
// }

// int main() {
	
//     int a[]={10,15,20,40};
//     int b[]={5,6,6,10,15};
	
// 	int m=sizeof(a)/sizeof(a[0]);
// 	int n=sizeof(b)/sizeof(b[0]);
// 	merge(a,b,m,n);
// }

//three points are given and in order       low <= mid < high
//low to mid is sorted and mid+1 to high is sorted 
//sort low to high
//time complexity = O(n)    space somplexity = theta(n)
#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[], int l, int m, int h){
    
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}

int main() {
	
    int a[]={10,15,20,40,8,11,15,22,25};
	int l=0,h=8,m=3;
	
	merge(a,l,m,h);
	for(int x: a)
	    cout<<x<<" ";
}

//mergesort algo
#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[], int l, int m, int h){
    
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}

void mergeSort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;            // it is same as (r+l)/2 but to avoid overflow it is written like this
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main() {
	
    int a[]={10,5,30,15,7};
	int l=0,r=4;
	
	mergeSort(a,l,r);
	for(int x: a)
	    cout<<x<<" ";
}

//intersection of two sorted arrays (common in both arrays)
// naive solution       works for every array whether its sorted or not     time = O(m+n)
#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int a[], int b[], int m, int n){
    
    for(int i=0;i<m;i++){
        if(i>0 && a[i-1]==a[i])
            continue;
        for(int j=0;j<n;j++)
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
    }    
}

int main() {
	
    int a[]={3,5,10,10,10,15,15,20};
    int b[]={5,10,10,15,30};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	intersection(a,b,m,n);
}

// efficient solution       actually using the fact that both the arrays are sorted        time = theta(m+n)
#include <bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int m, int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;j++;
        }
    }    
}

int main() {
	
    int a[]={3,5,10,10,10,15,15,20};
    int b[]={5,10,10,15,30};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	intersection(a,b,m,n);
}