//Prefix Sum Array: The prefix sum array of any array, arr[] is defined as an array of same 
//size say, prefixSum[] such that the value at any index i in prefixSum[] is sum of all elements
//from indexes 0 to i in arr[]. 

// queries on a fixed array                      
// #include <iostream>
// #include <cmath>
// #include <climits>
// using namespace std;

// int prefix_sum[10000];                          //global variable
// void preSum(int arr[], int n){
// 	prefix_sum[0] = arr[0];                             //time complexity = O(n)
// 	for(int i = 1; i < n; i++){
// 		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
// 	}
// }

// int getSum(int prefix_sum[], int l, int r){
// 	if(l != 0)
// 		return prefix_sum[r] - prefix_sum[l - 1];               //time complexity = O(1)
// 	else
// 		return prefix_sum[r];
// }
// int main() {
//     int arr[] = {2, 8, 3, 9, 6, 5, 4}, n = 7;
//     preSum(arr, n);
//     cout<<getSum(prefix_sum, 1, 3)<<endl;
//     cout<<getSum(prefix_sum, 0, 2)<<endl;    
// }

// //equilibrium point --> a point in array whose left sum and right sum are equal(point is excluded)
// //naive solution        O(n^2)
// #include <iostream>
// #include <cmath>
// #include <climits>
// using namespace std;

// bool checkEquilibrium(int arr[], int n){
// 	for(int i  = 0; i < n; i++){
// 		int l_sum = 0, r_sum = 0;
// 		for(int j = 0; j < i; j++)
// 			l_sum += arr[j];
// 		for(int j = i + 1; j < n; j++)
// 			r_sum += arr[j];
// 		if(l_sum == r_sum)
// 			return true;
// 	}
// 	return false;
// }

// int main() {
//     int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;
//     printf("%s",checkEquilibrium(arr, n)? "true" : "false");   
// }


//efficient solution        O(n)
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

bool checkEquilibrium(int arr[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	int l_sum = 0;
	for(int i = 0; i < n; i++){
		if(l_sum == sum - arr[i])
			return true;

		l_sum += arr[i];
		sum -= arr[i];
	}
	return false;
}

int main() {
    int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;
    printf("%s",checkEquilibrium(arr, n)? "true" : "false");   
}

//ranges question           refer prefix-sum 2
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;

int maxOcc(int L[], int R[], int n){	
    	int arr[1000];
    	memset(arr, 0, sizeof(arr));
    	for(int i = 0; i < n; i++){
    		arr[L[i]]++;
    		arr[R[i] + 1]--;
    	}
    	int maxm = arr[0], res = 0;
    	for(int i = 1; i < 1000; i++){
    		arr[i] += arr[i - 1];
    		if(maxm < arr[i]){
    			maxm = arr[i];
    			res = i;
    		}
    	}
    	return res;
}

int main() {
    int L[] = {1, 2, 3}, R[] = {3, 5, 7}, n = 3;
    cout<<maxOcc(L, R, n);   
}