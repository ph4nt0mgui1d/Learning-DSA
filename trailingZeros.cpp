// naive method (wont work for big numbers)
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact * i;
//     }
    
//     int res = 0;

//     while(fact%10 == 0){
//         res++;
//         fact = fact/10;    
//     }
//     cout << res;
//     return 0;
// }   

// efficient method

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res = 0;
    for(int i = 5; i<=n; i = i*5){
        res = res + n/i;
    }
    cout << res;
    return 0;
}