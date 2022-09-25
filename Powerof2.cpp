//fact = all powers of 2 have only 1 bit SET.
//naive method
// #include<iostream>
// using namespace std;

// bool isPow(int n){
//     if (n==0)
//         return false;
//     while(n != 1){
//         if (n%2 != 0)
//             return false;
//         n = n/2;
//     }
//     return true;
// }

// int main(){
//     cout << isPow(16);
//     return 0;
// }

//efficient method
#include <iostream>
using namespace std;

bool isPow2(int n)
{
    if(n == 0)
        return false;
                                                    //one line --> return ((n!=0) && (n & (n-1)) == 0)
    return ((n & (n - 1)) == 0);
}
    
int main() {
	
	int n = 4;
	
	printf("%s", isPow2(n)? "true": "false");
}