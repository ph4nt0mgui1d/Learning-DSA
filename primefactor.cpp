//naive method
// #include<iostream>
// using namespace std;

// bool isPrime(int n)
// {
// 	if(n==1)
// 		return false;

// 	if(n==2 || n==3)
// 		return true;

// 	if(n%2==0 || n%3==0)
// 		return false;

// 	for(int i=5; i*i<=n; i=i+6)
// 	{
// 		if(n % i == 0 || n % (i + 2) == 0)
// 			return false; 
// 	}

// 	return true;
// }

// void primeFactor(int n){                                             // O(n^2logn)
//     for (int j = 2; j<n; j++){
//         if(isPrime(j)){
//             int x = j;
//             while(n%x == 0){
//                 cout << j << endl;
//                 x = x*j;
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cin >> n;  
//     primeFactor(n);
//     return 0;
// } 

// efficient method
// #include <iostream>
// #include <limits.h>
// using namespace std;

//  void printPrimeFactors(int n)                             
// {
// 	if(n <= 1)
// 		return;

// 	for(int i=2; i*i<=n; i++)
// 	{
// 		while(n % i == 0)
// 		{
// 			cout<<i<<" ";

// 			n = n / i;
// 		}
// 	}

// 	if(n > 1)
// 		cout<<n<<" ";

// 	cout<<endl;
// }

// int main() {
    
//     	int n;
//     	cin >> n;
//     	printPrimeFactors(n);
    	
//     	return 0;
// }

// more efficient method
#include <iostream>
#include <limits.h>
using namespace std;

 void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	while(n % 2 == 0)
	{
		cout<<2<<" ";

		n = n / 2;
	}

	while(n % 3 == 0)
	{
		cout<<3<<" ";                                               // time complexity = theta(sqrt(n))

		n = n / 3;
	}

	for(int i=5; i*i<=n; i=i+6)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}

		while(n % (i + 2) == 0)
		{
			cout<<(i + 2)<<" ";

			n = n / (i + 2);
		}
	}

	if(n > 3)
		cout<<n<<" ";

	cout<<endl;
}

int main() {
    
    	int n = 450;
    	
    	printPrimeFactors(n);
    	
    	return 0;
}