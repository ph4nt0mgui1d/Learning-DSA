/*      time = O(nlogn) 
m represents number of children
all the numbers in array represent the number of chocolates in individual packets
rules:
    every one should get only one packet
    the difference between min and max of chocolate shoudld be min.
*/
#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int n,int m){
    if(m>n)
        return -1;
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=0;(i+m-1)<n;i++)
        res=min(res,arr[i+m-1]-arr[i]);
    return res;
}
 
int main() {
    int arr[]={7,3,2,4,9,12,56};
	int n=sizeof(arr)/sizeof(arr[0]);int m=3;	
	cout<<minDiff(arr,n,m);
}