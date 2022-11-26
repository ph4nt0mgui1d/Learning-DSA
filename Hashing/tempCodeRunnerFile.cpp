#include<bits/stdc++.h>
using namespace std;
                                        //time = theta(n), space = O(n)
void countfreq(int arr[], int n){
    unordered_map<int, int> m;
    for(int i = 0; i<n; i++){
        m[arr[i]]++;                            
    }
    for(auto x: m)
        cout << x.first << " " << x.second << endl;
}

int main(){
    int arr[] = {5,5,3,2,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    countfreq(arr, n);
}