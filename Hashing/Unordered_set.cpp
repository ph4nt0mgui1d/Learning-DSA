// #include <bits/stdc++.h> 
// using namespace std; 

// int main(){
    
//     unordered_set <int> s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(15);
//     s.insert(20);
//     for(int x: s)
//         cout<<x<<" ";
        
//     cout<<endl;
//     for(auto it=s.begin();it!=s.end();it++)
//         cout<<*it<<" ";
//     cout<<endl;
//     cout<<s.size()<<endl;
//     s.clear();
//     cout<<s.size()<<endl;
    
//     s.insert(10);
//     s.insert(5);
//     s.insert(15);
//     s.insert(20);
//     cout<<s.size()<<endl;
    
//     if(s.find(15)==s.end())
//         cout<<"Not Found";
//     else
//         cout<<"Found "<<(*s.find(15));
    
//     cout<<endl;   
//     if(s.count(15))
//         cout<<"Found";
//     else
//         cout<<"Not Found";
//     cout<<endl;
    
//     cout<<s.size()<<endl;
//     s.erase(15);
//     cout<<s.size()<<endl;
//     auto it=s.find(10);
//     s.erase(it);
//     cout<<s.size()<<endl;
    
//     s.erase(s.begin(),s.end());
        
//     return 0;
// }


//Count distinct objects in an array using hashing

#include<bits/stdc++.h>
using namespace std;
                                    //time = theta(n), space = O(n)
int main(){
    int arr[] = {15, 12, 13, 12, 13, 13, 18};
    unordered_set<int> s;

    for(int i =0; i<7; i++)         //unordered_set<int> s(arr, arr+n) where n is the size. this will copy the arr element without for loop
        s.insert(arr[i]);

    cout << s.size();
    return 0;
}
