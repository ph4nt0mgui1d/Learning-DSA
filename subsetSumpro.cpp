// in this problem we are given a array and a value as sum.
//we need to find out the number of subsets of that array which gives a sum equal to that value.
#include <iostream>
#include <limits.h>
using namespace std;

int countSubsets(int arr[], int n, int sum){
	if(n==0)
		return sum==0? 1 : 0;

	return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}

int main() {
    int n = 3, arr[]= {10, 20, 15}, sum = 25;
	cout<<countSubsets(arr, n, sum);	
   	return 0;
}