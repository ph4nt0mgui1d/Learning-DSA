// naive solution
#include<iostream>
using namespace std;

int lcm(int a, int b){
    int res = max(a,b);
    while(true){
        if (res%a == 0 && res%b == 0){
            return res;
        }
        res++;
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << lcm(a,b);
    return 0;
}

// refer notebook for formula
// #include<iostream>
// using namespace std;

// int gcd (int a, int b){
//     if(b == 0)
//         return a;
//     else  
//         return gcd(b, a%b);
// } 

// int lcm(int a, int b){
//     return a*b/(gcd(a,b));
// }

// int main(){
//     int a,b;
//     cin >> a >> b;
//     cout << lcm(a,b);
//     return 0;
// }

