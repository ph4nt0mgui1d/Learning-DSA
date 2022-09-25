#include<iostream>
using namespace std;

bool isLucky(int n) {
    static int counter = 2;
        
    if(counter > n)
        return true;
    else if(n%counter == 0)
        return false;
        
    int nelements = n;
    nelements = nelements - nelements/counter;
    counter++;
    return isLucky(nelements);
}

int main(){
    int n = 74;
    if(isLucky(n))
        cout << "1\n";
    else
        cout << "0\n";
}