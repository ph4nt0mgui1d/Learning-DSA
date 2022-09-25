/*O(n^2) in worst case
O(n) in best case
inplace and stable
use for small arrays
TimSort
IntroSort
worst case = reverse sorted
best case = already sorted
*/

#include <iostream>
#include <algorithm>
using namespace std;

void iSort(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){                  //if arr[j] > k is replaced with >= the algo becomes unstable
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() {
	
    int arr[]={50,20,40,60,10,30};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	iSort(arr,n);

	for(auto x: arr)
	    cout<<x<<" ";
}