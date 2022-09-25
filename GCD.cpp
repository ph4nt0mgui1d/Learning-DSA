// naive method
// #include<iostream>
// using namespace std;

// int gcd (int a, int b){
//     int res = min(a,b);
//     while(res>0){
//         if(a%res == 0 && b%res == 0){
//             break;
//         }
//         res--;
//     }
//     return res;
// }

// int main(){
//     int a,b;
//     cin >> a >> b;
//     cout << gcd(a,b);
//     return 0;
// }

// Euclidean algo
// #include<iostream>
// using namespace std;

// int gcd(int a, int b){
//     while(a != b){
//         if(a>b)
//             a = a-b;
//         else
//             b = b-a;
//     }
//     return a;
// }

// int main(){
//     int a,b;
//     cin >> a >> b;
//     cout << gcd(a,b);
//     return 0;
// }

// Euclidean algo (optimised)

#include<iostream>
using namespace std;

int gcd (int a, int b){
    if(b == 0)
        return a;
    else  
        return gcd(b, a%b);
} 

int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}