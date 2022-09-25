//naive solution            time complexity = O(n^2)
//the subarray have contiguous elements in the subarray
// #include<iostream>
// #include<cmath>
// using namespace std;

// int maxSum(int arr[], int n){
// 	int res = arr[0];
// 	for(int i = 0; i < n; i++){
// 		int curr = 0;
// 		for(int j = i; j < n; j++)
// 		{
// 			curr = curr + arr[j];
// 			res = max(res, curr);
// 		}
// 	}	
// 	return res;
// }

// int main() {
//      int arr[] = {1, -2, 3, -1, 2}, n = 5;
//      cout<<maxSum(arr, n);   
// }

//efficient solution            time complexity = O(n)
//dynamic pregramming 
#include <iostream>
#include <cmath>
using namespace std;

int maxSum(int arr[], int n){
	int res = arr[0];
	int maxEnding = arr[0];
	for(int i = 1; i < n; i++){
		maxEnding = max(maxEnding + arr[i], arr[i]);
		res = max(maxEnding, res);
	}	
	return res;
}

int main() {
     int arr[] = {1, -2, 3, -1, 2}, n = 5;
     cout<<maxSum(arr, n);   
}

//kadane's algo           time complexity = O(n)
// C++ program to print largest contiguous array sum
// #include<iostream>
// #include<climits>
// using namespace std;

// int maxSubArraySum(int a[], int size)
// {
// 	int max_so_far = INT_MIN, max_ending_here = 0;

// 	for (int i = 0; i < size; i++)
// 	{
// 		max_ending_here = max_ending_here + a[i];
// 		if (max_so_far < max_ending_here)
// 			max_so_far = max_ending_here;

// 		if (max_ending_here < 0)
// 			max_ending_here = 0;
// 	}
// 	return max_so_far;
// }

// /*Driver program to test maxSubArraySum*/
// int main()
// {
// 	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
// 	int n = sizeof(a)/sizeof(a[0]);
// 	int max_sum = maxSubArraySum(a, n);
// 	cout << "Maximum contiguous sum is " << max_sum;
// 	return 0;
// }
