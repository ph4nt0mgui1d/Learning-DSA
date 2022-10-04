#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

int printlist(Node *head){
    if(head == NULL){return NULL;}
    Node *curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node *SortInsert(Node *head, int data){
    Node *temp = new Node(data);
    if(head == NULL)
        return temp;
    
    Node *curr = head;
    while(curr->next != NULL && curr->next->data < data){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;    
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = SortInsert(head, 25);
    printlist(head);
    return 0;
}