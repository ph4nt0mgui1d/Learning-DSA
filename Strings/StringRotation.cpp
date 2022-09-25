// #include<bits/stdc++.h>
// using namespace std;

// bool strRotate(string &s1, string &s2){
//     string::iterator it = s1.end();
//     for(int i = 0; i<s1.length(); i++){
//         if(s1 == s2)
//             return true;
//         else
//             s1[i] = *(it-1);    
//     }
//     return false;
// }

// int main(){
//     string s1 = "ABCD";string s2="CDAB";
//     if(strRotate(s1,s2)){cout<<"Strings are rotations of each other"<<endl;}
//     else{cout<<"Strings are not rotations of each other"<<endl;}
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool strRotate(string &s1, string &s2){
    if(s1.length()!=s2.length())
        return false;
    return ((s1+s1).find(s2)!= string::npos);
}

int main(){
    string s1 = "ABCD";string s2="CDAB";
    if(strRotate(s1,s2)){cout<<"Strings are rotations of each other"<<endl;}
    else{cout<<"Strings are not rotations of each other"<<endl;}
    
    return 0;
}