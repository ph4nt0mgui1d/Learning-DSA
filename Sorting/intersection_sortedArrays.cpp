// common elements of both the arrays
// naive solution   time complexity = O(n*m)
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

// efficient solution       time complexity = theta(m+n)
// efficient solution for both intersection and union have the same idea -- traversal of both the arrays together..

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