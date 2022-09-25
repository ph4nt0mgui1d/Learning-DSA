//naive method
// #include<iostream>
// using namespace std;

// void printDivisors(int n){
//     for(int i = 1; i<=n; i++){
//         if(n%i == 0){
//             cout << i << endl;                                  //time complexity = theta(n)
//         }                                                        //space complexity = theta(1)
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     printDivisors(n);
//     return 0;
// }

// efficient method
#include<iostream>
using namespace std;

void printDivisors(int n){
    // for(int i = 1; i*i<=n; i++){
    //     if(n%i == 0){
    //         cout << i << "  ";                                    // give the correct answer but print in wrong order
    //         if(i != n/i){
    //             cout << n/i << endl;
    //         }                                                    //time complexity = theta(sqrt(n)
    //     }                                                        
    // }
    int i;
    for(i = 1; i*i<n; i++){
        if (n%i == 0)
            cout<< i<< "  ";                            //same time complexity
    }                                                   //same aux. space
    for (;i>=1;i--){
        if(n%i == 0)
            cout<< n/i<<"  ";
    }
}

int main(){
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}