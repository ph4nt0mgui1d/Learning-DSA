//iterative method          
// #include <iostream>
// using namespace std;
 

// class gfg {
// public:
//     int getSum(int n){
//         int sum = 0;
//         while (n != 0) {
//             sum = sum + n % 10;
//             n = n / 10;
//         }
//         return sum;
//     }
// };
 
// int main(){
//     gfg g;
//     int n = 687;
//     cout << g.getSum(n);
//     return 0;
// }

//Recursive method          iterative method runs faster then recursive method in this problem 
                            //as aux space of iterative method is theta(1) while recursive method have theta(n)
                            //and both have same time complexity theta(n)
#include<iostream>
using namespace std;

int sumofdigits(int n){
    if(n == 0)
        return 0;
    else   
        return sumofdigits(n/10) + n%10;
}

int main(){
    int n = 32478;
    cout << sumofdigits(n);
    return 0;
}