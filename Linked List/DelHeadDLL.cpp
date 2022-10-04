#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int n){
        data = n;
        next = NULL;
        prev = NULL;
    }
};

Node *delHead(Node *head){
    if(head == NULL)
        return NULL;
    else if(head->next == NULL){
        delete head;
        return NULL;
    }
    else{
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
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
    head = delHead(head);
    printlist(head);
    return 0;
}
