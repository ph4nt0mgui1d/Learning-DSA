//mine
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][4] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
    for(int i = 0; i<4; i++){
        if(i%2 == 0){
            for(int j = 0;j < 4; j++)
                cout << arr[i][j] << " ";
        }
        else{
            for(int j = 3;j >= 0; j--)
                cout << arr[i][j] << " ";
        }
    }
}

//
#include <iostream>         // time = theta(R*C)
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;
const int R = 4, C = 4;
void printSnake(int mat[R][C]){
	for(int i = 0; i < R; i++){
		if(i % 2 == 0){
			for(int j = 0; j < C; j++)
				cout << mat[i][j] << " ";
		}
		else{
			for(int j = C - 1; j >= 0; j--)
				cout << mat[i][j] << " ";
		}
	}
}
int main(){	
	int arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
    printSnake(arr);
	return 0;
}