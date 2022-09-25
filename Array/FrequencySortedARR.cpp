//frequency of each number in sorted array
//for unsorted array we can first sort the array and then apply the same but the time complexity 
//will increase significantly so there is another approach in othe track.
#include <iostream>
#include <cmath>
using namespace std;

void printFreq(int arr[], int n){
	int freq = 1, i = 1;
	while(i < n){
		while(i < n && arr[i] == arr[i - 1]){
			freq++;
			i++;
		}
		cout<<arr[i - 1] << " " << freq << endl;
		i++;
		freq = 1;
	}
}

int main() {
      int arr[] = {10, 10, 20, 30, 30, 30}, n = 6;
      printFreq(arr, n);   
}