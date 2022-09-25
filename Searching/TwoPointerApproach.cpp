// Find pair in sorted array which gives sum X
#include<iostream>      //time complexity = O(n)
#include<tuple>
using namespace std;

tuple<int,int> getSum(int arr[], int n, int x){
    int low = 0, high = n-1;
    while(low<high){
        if(arr[low]+arr[high] > x){
            high--;                                   //tuple used to return both the values
        }
        else if(arr[low] + arr[high] < x)
            low++;
        else
            return make_tuple(low, high);
    }   
}

int main(){
    int arr[] = {2,5,8,12,30};
    int n = 5, x = 17;
    int ele1, ele2;
    tie(ele1,ele2) =  getSum(arr, n, x);                //tie used to call the tuple
    printf("the positions of elements are %d %d.",ele1, ele2);
    return 0;
}

// Find triplet in an array which gives sum X (sorted array)      time = O(n^2)
#include <bits/stdc++.h> 
using namespace std; 

// returns true if there is triplet with sum equal 
// to 'sum' present in A[]. Also, prints the triplet 
bool find3Numbers(int A[], int arr_size, int sum) 
{ 
	int l, r; 

	/* Sort the elements */
	sort(A, A + arr_size); 

	/* Now fix the first element one by one and find the 
	other two elements */
	for (int i = 0; i < arr_size - 2; i++) { 

		// To find the other two elements, start two index 
		// variables from two corners of the array and move 
		// them toward each other 
		l = i + 1; // index of the first element in the 
		// remaining elements 

		r = arr_size - 1; // index of the last element 
		while (l < r) { 
			if (A[i] + A[l] + A[r] == sum) { 
				printf("Triplet is %d, %d, %d", A[i], 
					A[l], A[r]); 
				return true; 
			} 
			else if (A[i] + A[l] + A[r] < sum) 
				l++; 
			else // A[i] + A[l] + A[r] > sum 
				r--; 
		} 
	} 

	// If we reach here, then no triplet was found 
	return false; 
} 

/* Driver program to test above function */
int main() { 
	int A[] = { 1, 4, 45, 6, 10, 8 }; 
	int sum = 22; 
	int arr_size = sizeof(A) / sizeof(A[0]); 
	find3Numbers(A, arr_size, sum); 
	return 0; 
} 
/*
for the unsorted array either sort the array (if your are allowed to change the array)and then apply the upper methods
or
use hashing. hashing takes O(n) extra auxiliary approach but the time complexity is same.
*/

//questions on two pointer method
//count pairs with given sum
//count triplets with given sum
//find if there is a triplet a,b,c such a^2+b^2=c^2             (amazon)