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

Node *delTail(Node *head){
    if(head == NULL)
        return NULL;
    if(head->next == NULL){
        delete head;            // in c++ we need to dealocate this memory that's why head is deleted
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next != NULL)
        curr = curr->next;

    delete curr->next;
    curr->next = NULL;          // in c++ we need to dealocate this memory that's why node is equaled ot NULL
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
    delTail(head);
    rPrint(head);
    return 0;
}