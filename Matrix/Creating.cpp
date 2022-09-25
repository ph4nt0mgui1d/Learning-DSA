//fixed sized arrays
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;

int main(){
	int arr[3][2] = {{10, 20},
					 {30, 40},
					 {50, 60}};

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << arr[i][j] << " ";
		}
	}
	return 0;
}

//variable sized arrays
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

int main(){	
	int m = 3, n = 2;
	int arr[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = i + j;
		}
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
	}
	return 0;
}

//creating a matrix using double pointer method
//not a cache friendly process
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

int main(){	
	int m = 3, n = 2;
	int **arr;
	arr = new int* [m];
	for(int i = 0; i < m; i++)
		arr[i] = new int[n];

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = 10;	

			cout << arr[i][j] << " ";
		}
	}
	return 0;
}

//array of pointer
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

int main(){	
	int m = 3, n = 2;
	int *arr[m];

	for(int i = 0; i < m; i++)
		arr[i] = new int[n];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			arr[i][j] = 10;	
			cout << arr[i][j] << " ";
		}
	}
	return 0;
}

//array of vectors
//not a cache friendly process
//individual rows are of dynamic size
//easy to pass to a function
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

int main(){	
	int m = 3, n = 2;
	vector<int> arr[m];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			arr[i].push_back(10);
		}
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
	}
	return 0;
}

//vector of vectors
//not a cache friendly process
//number of rows are also dynamic size
//easy to pass to a function
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

int main(){	
	int m = 3, n = 2;
	vector<vector<int>> arr;
	for(int i = 0; i < m; i++){
		vector<int> v;
		for(int j = 0; j < n; j++){
    		v.push_back(10);
		}

		arr.push_back(v);
	}
	for(int i = 0; i < arr.size(); i++){
		for(int j = 0; j < arr[i].size(); j++){
			cout << arr[i][j] << " ";
		}
	}
	return 0;
}