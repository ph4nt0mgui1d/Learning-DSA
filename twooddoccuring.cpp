// //naive solution            //time complexity = theta(n^2)
// #include <iostream>
// using namespace std;

// void oddAppearing(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         int count = 0;
//         for(int j = 0; j < n; j++){
//             if(arr[i] == arr[j])
//                 count++;
//         }
//         if(count % 2 != 0)
//             cout<<arr[i]<<" ";
//     }
// }
// int main() {	
// 	int arr[]= {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
//     oddAppearing(arr, n);
// }

//efficient solution        time complexity = theta(n)
#include <iostream>
using namespace std;

void oddAppearing(int arr[], int n)
{
    
        int xors = 0, res1 = 0, res2 = 0;

        for (int i = 0; i < n; i++) 
            xors = xors ^ arr[i]; 

        int sn = xors & (~(xors - 1)); 

        for (int i = 0; i < n; i++) { 
            if ((arr[i] & sn) != 0) 
                res1 = res1 ^ arr[i]; 
            else
                res2 = res2 ^ arr[i]; 
        }        
        cout <<  res1 << " " << res2;
}

int main() {
	int arr[]= {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
    oddAppearing(arr, n);   
}