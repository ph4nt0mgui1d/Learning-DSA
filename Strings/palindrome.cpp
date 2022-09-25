// //naive solution        time = theta(n)     aux = theta(n)
// #include<cstring>
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// bool palin(string &str){
//     string rev = str;
//     reverse(rev.begin(), rev.end());
//     return (rev == str);
// }

// int main(){
//     string str = "ABCBA";
//     cout << palin(str);
//     return 0;
// }

//efficient solution        time = O(n)     aux = O(1)
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

bool palin(string &str){
    int begin = 0, end = (str.length() - 1);
    while(begin < end && begin != end){
        if(str[begin] == str[end]){
            begin++;
            end--;
            continue;
        }
        else
            return false;
    }
    return true;
}

int main(){
    string str = "ABCBA";
    cout << palin(str);
    return 0;
}
