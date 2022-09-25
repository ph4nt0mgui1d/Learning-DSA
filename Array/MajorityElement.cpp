//Majority element appear more then n/2 time in array       print any index
//naive solution            time complexity = O(n^2)
// #include <iostream>
// #include <cmath>
// using namespace std;

// int findMajority(int arr[], int n){
// 	for(int i = 0; i < n; i++){
// 		int count = 1;
// 		for(int j = i + 1; j < n; j++){
// 			if(arr[i] == arr[j])
// 				count++;
// 		}
// 		if(count > n / 2)
// 			return i;
// 	}
// 	return -1;
// }

// int main() {
//      int arr[] = {8, 7, 6, 8, 6, 6, 6, 6}, n = 8;
//      cout<<findMajority(arr, n);   
// }

//efficient solution    moore's voting algo     time complexity = O(n)
#include <iostream>
#include <cmath>
using namespace std;

int findMajority(int arr[], int n){
	int res = 0, count = 1;
        //phase1
    	for(int i = 1; i < n; i++){
    		if(arr[res] == arr[i])
    			count++;                //find a candidate
    		else 
    			count --;
    		if(count == 0){
    			res = i; count = 1;
    		}
    	}
        //phase 2
    	count = 0;
    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;                    //check if candidate is actually majority
    	if(count <= n /2)
    		res = -1;
    	return res; 
}

int main() {
     int arr[] = {8, 8, 6, 6, 6, 4, 6}, n = 7;
     cout<<findMajority(arr, n);   
}