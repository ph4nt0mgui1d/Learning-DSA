// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isSorted(int arr[], int n)
// {
// 	for(int i = 1; i < n; i++)
// 	{
// 	    if(arr[i] < arr[i - 1])
// 	        return false;
// 	}

// 	return true;
// } 

    
// int main() {
	
//       int arr[] = {5, 12, 30, 2, 35}, n = 5;
      
//       printf("%s", isSorted(arr, n)? "true": "false");
    
// }

//my code
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int array[5] = {1,2,3,4,5};
    //sorted element
    
    // int a = array[0];
    bool flag;
    for(int i = 0; i < 5; i++){
        if (array[i] < array[i-1])
            flag = false;
        else
            flag = true; 
       
    }
    if (flag == true)
        cout << "Sorted" << endl;
    else
        cout << "Unsorted" << endl;
    return 0;
}