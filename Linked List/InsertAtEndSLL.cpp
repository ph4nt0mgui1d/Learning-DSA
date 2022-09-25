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

Node *insertEND(Node *head, int x){
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    
    Node *curr = head;
    while(curr->next != NULL)
        curr = curr->next;

    curr->next = temp;
    return head;
}

void rPrint(Node *head){
    if(head == NULL)
        return;
    
    cout << (head->data) << " ";
    rPrint(head->next);
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = insertEND(head, 40);
    rPrint(head);
    return 0;
}