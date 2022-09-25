//recursive method

#include<iostream>
using namespace std;

void subset(string a, string curr = "", int index = 0){
	if(index == a.length()){
		cout << curr << " ";
		return;
	}	
	subset(a, curr, index + 1);
	subset(a, curr+a[index], index + 1);
}

int main(){
	string a = "ABC";
	subset(a);
}