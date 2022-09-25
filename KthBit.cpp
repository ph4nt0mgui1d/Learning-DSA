#include <bits/stdc++.h>
using namespace std;

void kthBit(int n, int k){
    if(n & (1<<(k-1)))
        cout << "SET" << endl;
    
    else
        cout << "Not SET" << endl;
                                                                //using left shift operator
}

void rightkthBit(int n, int k);

int main(){
    kthBit(17, 3);
    rightkthBit(12,3);
    return 0;
}



void rightkthBit(int n, int k){
   if ((n >> (k - 1)) & 1) 
		cout << "SET"; 
	else                                                                     //using right shift operator
		cout << "NOT SET"; 
                                
}

