// naive solution
// #include<bits/stdc++.h>
// using namespace std;

// int countSET(int n){
//     int count = 0;
//     while(n > 0){
//         if (n%2 != 0){          //or if ((n&1) == 1)    or  count = count + (n&1)
//             count++;
//         }
//         n = n/2;            //or (n >> 1)
//     }
//     return count;
// }
                                                        //time complexity = theta(total bits in n)
// int main(){
//     cout << countSET(3);
//     return 0;
// }

// brian karningham algorithm                       time complexity  = theta(set bit count )

// #include <bits/stdc++.h> 
// using namespace std; 

// unsigned int countSetBits(int n) 
// { 
//        unsigned int count = 0; 
//        while (n) { 
//           n &= (n - 1); 
//           count++; 
//        } 
//       return count; 
// } 

// /* Program to test function countSetBits */
// int main() 
// { 
// 	int i = 328746; 
// 	cout << countSetBits(i); 
// 	return 0; 
// } 

//lookup table          time complexity = theta(1)

// C++ program to Count set 
// bits in an integer 
#include <bits/stdc++.h> 
using namespace std; 

    int table[256];
	
	// recursive function to count set bits 
	void initialize() { 

      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	
	int countSetBits(int n)
	{
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}

/* Program to test function countSetBits */
int main() 
{ 
	    initialize();
		int n = 9; 
	cout << countSetBits(n); 
	return 0; 
} 
