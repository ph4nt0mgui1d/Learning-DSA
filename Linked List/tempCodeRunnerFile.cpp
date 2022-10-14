// data swap method
// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node *next;
//     Node(int n){
//         data = n;
//         next = NULL;
//     }
// };

// void printlist(Node *head){
//     Node *curr = head;
//     while(curr!=NULL){
//         cout << curr->data << " ";
//         curr = curr->next;
//     }cout << endl;
// }

// void pairwiseSwap(Node *head){
//     Node *curr = head;
//     while(curr != NULL && curr->next != NULL){
//         swap(curr->data, curr->next->data);
//         curr = curr->next->next;
//     }
// }

// int main(){
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);
//     printlist(head);
//     pairwiseSwap(head);
//     printlist(head);
//     return 0;
// }
