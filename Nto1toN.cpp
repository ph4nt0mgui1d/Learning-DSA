//printing 1 to N and N to 1 without using loops
#include<iostream>
using namespace std;

void print1toN(int n){
    if(n == 0)
        return;
    
    print1toN(n-1);
    cout << n << endl;
}

void printNto1(int n){
    if(n == 0)
        return;
    
    cout << n <<endl;
    printNto1(n-1);
}

int main(){
    int n = 5;
    print1toN(n);
    printNto1(n);
}