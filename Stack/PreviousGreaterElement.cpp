// Given an array of distinct integers, find the closest (positive wise) 
// greater on left of every element. If there is no greater element on left, then print -1
#include<bits/stdc++.h>
using namespace std;

void prevGreater(int arr[], int n){
    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";
    for(int i = 0; i<n; i++){
        while(s.empty() == false && s.top() <= arr[i])
            s.pop();

        int pg = (s.empty()) ? -1:s.top();
        cout << pg << " ";
        s.push(arr[i]);
    }
}

int main(){
    int arr[] = {20,30,10,5,15};
    int n = 5;
    prevGreater(arr, n);
    return 0;
}
