#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int n){
        data = n;
        next = NULL;
        prev =NULL;
    }
};

Node *delTail(Node *head){
    if(head == NULL)
        return NULL;

    if(head->next == NULL){
        delete head;
        return NULL;
    }

    Node *curr = head;
    while(curr->next != NULL)
        curr = curr->next;
    
    curr->prev->next = NULL;
    delete curr;
    return head;
}

int printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = delTail(head);
    printlist(head);
    return 0;
}