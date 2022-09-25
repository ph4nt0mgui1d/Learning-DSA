// number pallindrome
// #include<iostream>
// using namespace std;

// bool isPal(int n){
//     int temp = n;
//     int rev = 0;
//     while(temp != 0){
//         rev = rev * 10 + (temp%10);
//         temp = temp /10;
//     }
//     return (rev == n);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout << isPal(n);
//     return 0;
// }

//string pallindrome
// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

string ispal(string a){
    string temp = a;
    reverse(temp.begin(), temp.end());
    if (temp == a)
        return "Yes";
    else
        return "No";
}

int main(){
    string a = "refer";
    cout << ispal(a);
    return 0;
}

// //recursive method for string pallindrome
// #include <iostream>
// using namespace std;

// bool isPalindrome(string str, int start, int end){
// 	if(start >= end)
// 		return true;

// 	return ((str[start]==str[end]) && 
// 		     isPalindrome(str, start + 1, end - 1));
// }

// int main() {
// 	string s = "GeekskeeG";
// 		printf("%s", isPalindrome(s, 0, s.length() -1) ? "true" : "false");	

// 	return 0;
// }