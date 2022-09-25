// efficient appraoch 2         time  = O(n+CHAR)       space = O(CHAR)
#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int leftMost(string &str) 
{
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);       // to fill an array with particular value
    int res=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]])
        res=i;
        else
        visited[str[i]]=true;
    }
    
    return res;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 
//efficient approach 1          time  = O(n+CHAR)       space = O(CHAR)
#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int leftMost(string &str) 
{
    int fIndex[CHAR]={0};
    fill(fIndex,fIndex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<str.length();i++){
        int fi=fIndex[str[i]];
        if(fi==-1)
        fIndex[str[i]]=i;
        else
        res=min(res,fi);
    }
    
    return (res==INT_MAX)?-1:res;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 

// better approach
#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;
int leftmost(string s1){
    int count[CHAR] = {0};
    for(int i = 0; i<s1.length(); i++){
        count[s1[i]]++;
    }
    for(int i = 0; i<s1.length(); i++){
        if(count[s1[i]]>1)
            return i;
    }
    return -1;
}

int main(){
    string s1;
    cin >> s1;
    cout << leftmost(s1);
}


// // naive solution       time = O(n^2)
// #include<bits/stdc++.h>
// using namespace std;

// int leftmost(string s1){
//     for(int i = 0; i<s1.length(); i++){
//         for(int j = i+1; j<s1.length(); j++){
//             if(s1[i] == s1[j])
//                 return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     string s1;
//     cin >> s1;
//     cout << leftmost(s1);
// }