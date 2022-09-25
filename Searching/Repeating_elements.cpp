//rules
    //array size >=2
    //only one element repeats
    //0 is always present in array
    //all the elements from 0 to max(arr) are present
    //therefore 0<=max(arr)<=n-2

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

int repeat(int arr[], int n){
	bool visit[n];
	memset(visit, false, sizeof(visit));
	
	for(int i = 0; i < n; i++){
		if(visit[arr[i]])
			return arr[i];
		visit[arr[i]] = true;
	}
	return -1;
}

int main() {
    int arr[] = {0, 2, 1, 3, 2, 2}, n= 6;
    cout << repeat(arr, n);
	return 0;
}

//main solution                         do it again
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

int repeat(int arr[], int n){
	int slow = arr[0], fast = arr[0];

	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
	
	}while(slow != fast);
	
	slow = arr[0];
	while(slow != fast)	{
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
}

int main() {
    int arr[] = {1, 3, 2, 4, 6, 5, 7, 3}, n= 8;
    cout << repeat(arr, n);
	return 0;
}