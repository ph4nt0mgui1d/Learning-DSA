//naive solution            time complexity = O(n)
// #include <iostream>
// using namespace std;

// int search(int arr[], int n, int x){
//    	for(int i = 0; i < n; i++)
// 			if(arr[i] == x)
// 				return i;
// 	return -1;
// }

// int main() {
//     int arr[] = {100, 200, 400, 1000, 10, 20}, n = 6;
//     int x = 10;
// 	cout << search(arr, n, x);
// 	return 0;
// }


//efficient appraoch            time complexity = O(log n)
#include <iostream>
using namespace std;

int search(int arr[], int n, int x){
   	int low = 0, high = n - 1;
	while(low <= high){ 
		int mid = (low + high) / 2;
		if(arr[mid] == x)
			return mid;
		if(arr[low] < arr[mid]){
			if(x >= arr[low] && x < arr[mid])
				high = mid - 1;
			else 
				low = mid + 1;
		}
		else{
			if(x > arr[mid] && x <= arr[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return -1;
}

int main() {
    int arr[] = {10, 20, 40, 60, 5, 8}, n = 6;
    int x = 5;
	cout << search(arr, n, x);
	return 0;
}