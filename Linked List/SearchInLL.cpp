#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

//Iterative Solution
// int searchPos(Node *head, int x){
//     int pos = 1;
//     Node *curr = head;
//     while(curr!=NULL){
//         if(curr->data == x)
//             return pos;
        
//         else{
//             pos++;
//             curr = curr->next;
//         }
//     }    
//     return -1;
// }

//Recursive solution
int searchPos(Node *head, int x){
    if(head == NULL)
        return -1;
    
    if(head->data == x)
        return 1;

    else{
        int res = searchPos(head->next, x);
        if(res == -1)
            return -1;
        else    
            return(res+1);
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout << searchPos(head, 20);
    return 0;
}