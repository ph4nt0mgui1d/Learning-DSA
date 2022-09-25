/*time complexity = theta(N^2) in all the cases
does less memory writes compared to quick sort, merge sort, insertion sort, etc
but cycle sort is optimal in terms of memory writes
basic idea for heap sort
not stable
in-place --> does not require extra space for sorting
*/
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    
    for(int i = 0; i < n-1; i++){
        int min_ind = i;
        
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        
        swap(arr[i], arr[min_ind]);
    }   
}

int main() {
	int a[] = {2, 1, 3, 4};
	selectionSort(a, 4);
	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}