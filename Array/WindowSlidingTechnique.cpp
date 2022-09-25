//max sum of k consecutive numbers in an array (naive solution)
// #include <iostream>
// #include <cmath>
// #include <climits>
// using namespace std;

// int maxSum(int arr[], int n, int k){
// 	int max_sum = INT_MIN;                      //negative infinity
// 	for(int i = 0; i + k - 1 < n; i++){
// 		int sum = 0;
// 		for(int j = 0; j < k; j++){
// 			sum += arr[i + j];
// 		}
// 		max_sum = max(max_sum, sum);
// 	}
// 	return max_sum;
// }

// int main(){
//      int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;
//      cout<<maxSum(arr, n, k);   
// }

//max sum of k consecutive numbers in an array (efficient solution)
// #include <iostream>
// #include <cmath>
// #include <climits>
// using namespace std;

// int maxSum(int arr[], int n, int k){
// 	int curr_sum = 0;
// 	for(int i = 0; i < k; i++)
// 		curr_sum += arr[i];
// 	int max_sum = curr_sum;
// 	for(int i = k; i < n; i++){
// 		curr_sum += (arr[i] - arr[i - k]);
// 		max_sum = max(max_sum, curr_sum);
// 	}
// 	return max_sum;
// }

// int main() {
//      int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;
//      cout<<maxSum(arr, n, k);   
// }

//Question 2

/* An efficient program to print subarray with sum as given sum */
// #include<stdio.h> 

// /* Returns true if the there is a subarray of arr[] with a sum equal to 'sum' 
// otherwise returns false. Also, prints the result */
// int subArraySum(int arr[], int n, int sum) 
// { 
// 	/* Initialize curr_sum as value of first element 
// 	and starting point as 0 */
// 	int curr_sum = arr[0], start = 0, i; 

// 	/* Add elements one by one to curr_sum and if the curr_sum exceeds the 
// 	sum, then remove starting element */
// 	for (i = 1; i <= n; i++) 
// 	{ 
// 		// If curr_sum exceeds the sum, then remove the starting elements 
// 		while (curr_sum > sum && start < i-1) 
// 		{ 
// 			curr_sum = curr_sum - arr[start]; 
// 			start++; 
// 		} 

// 		// If curr_sum becomes equal to sum, then return true 
// 		if (curr_sum == sum) 
// 		{ 
// 			printf ("Sum found between indexes %d and %d", start, i-1); 
// 			return 1; 
// 		} 

// 		// Add this element to curr_sum 
// 		if (i < n) 
// 		curr_sum = curr_sum + arr[i]; 
// 	} 

// 	// If we reach here, then no subarray 
// 	printf("No subarray found"); 
// 	return 0; 
// } 

// // Driver program to test above function 
// int main() 
// { 
// 	int arr[] = {15, 2, 4, 8, 9, 5, 10, 23}; 
// 	int n = sizeof(arr)/sizeof(arr[0]); 
// 	int sum = 23; 
// 	subArraySum(arr, n, sum); 
// 	return 0; 
// } 

//Question 3
// CPP program print first M terms of 
// N-bonacci series. 
#include <bits/stdc++.h> 
using namespace std; 

// Function to print bonacci series 
void bonacciseries(long n, int m) { 

	// Assuming m > n. 
	int a[m] = { 0 }; 
	a[n - 1] = 1; 
	a[n] = 1; 

	// Uses sliding window 
	for (int i = n + 1; i < m; i++) 
		a[i] = 2 * a[i - 1] - a[i - n - 1]; 

	// Printing result 
	for (int i = 0; i < m; i++) 
		cout << a[i] << " "; 
} 

// Driver's Code 
int main() { 
	int N = 5, M = 15; 
	bonacciseries(N, M); 
	return 0; 
}
