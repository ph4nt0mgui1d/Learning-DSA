// naive solution       time = O(n^2)
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n){
    int res = INT_MAX;
    for(int i = 1; i < n; i++){
        for(int j = 0;j<i;j++){
            res = min(res, abs(arr[i] - arr[j]));
        }
    }
    return res;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	}
	cout<<getMinDiff(arr, n );
	return 0;
}

// efficient solution       time = O(nlogn)
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n){
    sort(arr, arr + n);
    int res = INT_MAX;
    
    for(int i = 1; i < n; i++){
        res = min(res, arr[i] - arr[i-1]);
    }
    return res;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	}	
	cout<<getMinDiff(arr, n );
	return 0;
}