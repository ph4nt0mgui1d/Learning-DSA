// // anagram is basically a permutation
// // naive method     time = O(nlogn) space = O(1)
// #include<bits/stdc++.h>
// using namespace std;

// bool anagram(string &s1, string &s2){
//     if(s1.length() == s2.length()){
//         sort(s1.begin(), s1.end());
//         sort(s2.begin(), s2.end());
//         return (s1 == s2);
//     }
//     return false;
// }

// int main() 
// { 
//     string str1 = "abeaac"; 
//     string str2 = "aadcba"; 
//     if (anagram(str1, str2)) 
//         cout << "The two strings are anagram of each other"; 
//     else
//         cout << "The two strings are not anagram of each other"; 
  
//     return 0; 
// } 

// effective method         time = O(n)     space = O(n+CHAR)
#include <bits/stdc++.h>
using namespace std;

const int CHAR = 256;
bool anagram(string &s1, string &s2){
    if(s1.length() != s2.length())
        return false;
    
    int count[CHAR] = {0};
    for(int i = 0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i = 0; i<CHAR; i++){
        if(count[i] != 0)
            return false;
    }
    return true;
}

int main() 
{ 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (anagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 