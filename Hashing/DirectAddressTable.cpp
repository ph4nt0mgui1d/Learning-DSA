/*
it is basically an array doing all the operations using random access in O(1) time 
a array of boolean values and the addresses are in range.
problems:- 
    it cannot handle large values.
    cannot handle float values
    cannot handle stcings or alphanumerics

        as all of these cannot be indexes of array
*/
#include <bits/stdc++.h>
using namespace std;

struct DAT{
    int table[1000]={0};
    
    void insert(int i){
        table[i]=1;
    }
    
    void del(int i){
        table[i]=0;
    }
    
    int search(int i){
        return table[i];
    }
};

int main(){
    DAT dat;
    dat.insert(10);
    dat.insert(20);
    dat.insert(119);
    cout<<dat.search(10)<<endl;
    cout<<dat.search(20)<<endl;
    dat.del(119);
    cout<<dat.search(119)<<endl;
    
    return 0; 
}
