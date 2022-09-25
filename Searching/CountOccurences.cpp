#include <iostream>                 // time = O(log n)         space = O(1)
using namespace std;

int firstOcc(int arr[], int n, int x){
	int low = 0, high = n - 1;
	while(low <= high){
		int mid = (low + high) / 2;
		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else{
			if(mid == 0 || arr[mid - 1] != arr[mid])
				return mid;

			else
				high = mid - 1;
		}

	}
	return -1;
}

int lastOcc(int arr[], int n, int x){
	int low = 0, high = n - 1;
	while(low <= high){
		int mid = (low + high) / 2;
		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else{
			if(mid == n - 1 || arr[mid + 1] != arr[mid])
				return mid;

	    	else
				low = mid + 1;
		}
	}
	return -1;
}

int countOcc(int arr[], int n, int x){
	int first = firstOcc(arr, n, x);
	if(first == -1)
		return 0;
	else 
		return lastOcc(arr, n, x) - first + 1;
}

int main() {
    int arr[] = {10, 20, 20, 20, 40, 40}, n = 6;
    int x = 20;
    cout << countOcc(arr, n, x);
	return 0;
}

//for binary array same approach
#include <iostream>
using namespace std;

int countOnes(int arr[], int n){
	int low = 0, high = n - 1;
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == 0)
			low = mid + 1;
		else{
			if(mid == 0 || arr[mid - 1] == 0)
				return (n - mid);
			else 
				high = mid -1;
		}
	}
	return 0;		
}
int main() {
    int arr[] = {0, 0, 1, 1, 1, 1}, n = 6;
    cout << countOnes(arr, n);
	return 0;
}