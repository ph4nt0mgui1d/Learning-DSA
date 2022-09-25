// #include <bits/stdc++.h> 
// using namespace std; 

// int main(){
    
//     unordered_map <string,int> m;
//     m["gfg"]=20;
//     m["ide"]=30;
//     m.insert({"courses",15});
    
//     if(m.find("ide")!=m.end())
//         cout<<"Found";
//     else
//         cout<<"Not Found ";
    
//     cout<<endl;
    
//     for(auto it=m.begin();it!=m.end();it++)
//         cout<<(it->first)<<" "<<(it->second)<<endl;
    
//     if(m.count("ide")>0)
//         cout<<"Found";
//     else
//         cout<<"Not Found";
//     cout<<endl;
    
//     cout<<m.size()<<endl;
//     m.erase("ide");
//     m.erase(m.begin());
//     cout<<m.size()<<endl;
//     m.erase(m.begin(),m.end());
        
//     return 0;
// }

//frequency of elements in an array

#include<bits/stdc++.h>
using namespace std;
                                        //time = theta(n), space = O(n)
void countfreq(int arr[], int n){
    unordered_map<int, int> m;
    for(int i = 0; i<n; i++){
        m[arr[i]]++;                            
    }
    for(auto x: m)
        cout << x.first << " " << x.second << endl;
}

int main(){
    int arr[] = {5,5,3,2,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    countfreq(arr, n);
}