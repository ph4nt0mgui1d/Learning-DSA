// Number of digits present in a number entered by user

// #include<iostream>
// using namespace std;

// int main(){
//     int n, count = 0;
//     cin >> n;

//     while(n!=0){
//         n = n/10;
//         ++count;
//     }
//     cout << count << endl;

//     return 0;
// }

// method 2(recursive)

// #include<iostream>
// using namespace std;
// int countDigit(int n){
//     if(n == 0){
//         return 0;
//     }
//     return 1 + countDigit(n/10);
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << countDigit(n);
//     return 0;
// }

// method 3 (logarithmic method) (i line solution)
#include<iostream>
#include<cmath>
using namespace std;
int countDigit(int n){
    return floor(log10(n)+1);
}
int main(){
    int n;
    cin >> n;
    cout << countDigit(n);
    return 0;
}