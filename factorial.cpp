// iterative method
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact * i;
    
//     }
//     cout << fact;
//     return 0;
// }

// recursive method
// include<iostream>
// using namespace std;

// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * fact(n-1);
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << fact(n);
//     return 0;
// }

//tail recusive function
#include<iostream>
using namespace std;
//initially pass k = 1
int fact(int n, int k){
    if(n == 0){
        return k;
    }
    return fact(n-1, k*n);
}
int main(){
    int n;
    cin >> n;
    cout << fact(n, 1);
    return 0;
}