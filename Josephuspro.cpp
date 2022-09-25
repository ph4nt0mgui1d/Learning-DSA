#include<iostream>
using namespace std;

int jos(int n, int k){
    if(n == 1)
        return 0;
    else
        return (jos(n-1,k) + k) % n;                //understand the inner mech one more time
}

int main(){
    int n = 5, k = 3;
    cout << jos(n, k);
    return 0;
}

//if the indexing begin from 1 then make a new function passing value jos(n,k)+1 ;
