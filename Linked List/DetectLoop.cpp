//Changing pointer method
// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
// 	int data;
// 	Node* next;
// 	Node(int d)
// 	{
// 		data = d;
// 		next = NULL;
// 	}
// };

// Node* removeDuplicates(Node* head){
// 	Node *temp = head, *prev = head;

// 	while (temp != NULL) {
// 		if (temp->data != prev->data) {
// 			prev->next = temp;
// 			prev = temp;
// 		}
// 		temp = temp->next;
// 	}
// 	if (prev != temp)
// 		prev->next = NULL;
// 	return head;
// }

// Node* push(Node* head, int new_data){
// 	Node* new_node = new Node(new_data);
// 	new_node->next = head;
// 	head = new_node;
// 	return head;
// }
// void printList(Node* head){
// 	Node* temp = head;
// 	while (temp != NULL) {
// 		cout << temp->data << " ";
// 		temp = temp->next;
// 	}
// 	cout << endl;
// }

// int main(){
// 	Node* llist = NULL;
// 	llist = push(llist, 20);
// 	llist = push(llist, 13);
// 	llist = push(llist, 13);
// 	llist = push(llist, 11);
// 	llist = push(llist, 11);
// 	llist = push(llist, 11);
// 	cout << ("List before removal of duplicates\n");
// 	printList(llist);
// 	cout << ("List after removal of elements\n");
// 	llist = removeDuplicates(llist);
// 	printList(llist);
// }
// // Hashing
// #include <bits/stdc++.h>
// using namespace std;

// // Linked list Node
// struct Node {
// 	int data;
// 	Node* next;
// 	Node(int d)
// 	{
// 		data = d;
// 		next = NULL;
// 	}
// };
// Node* removeDuplicates(Node* head){
// 	Node *temp = head, *prev = head;

// 	while (temp != NULL) {
// 		if (temp->data != prev->data) {
// 			prev->next = temp;
// 			prev = temp;
// 		}
// 		temp = temp->next;
// 	}
// 	if (prev != temp)
// 		prev->next = NULL;
// 	return head;
// }

// Node* push(Node* head, int new_data){
// 	Node* new_node = new Node(new_data);
// 	new_node->next = head;
// 	head = new_node;
// 	return head;
// }
// void printList(Node* head){
// 	Node* temp = head;
// 	while (temp != NULL) {
// 		cout << temp->data << " ";
// 		temp = temp->next;
// 	}
// 	cout << endl;
// }

// int main(){
// 	Node* llist = NULL;
// 	llist = push(llist, 20);
// 	llist = push(llist, 13);
// 	llist = push(llist, 13);
// 	llist = push(llist, 11);
// 	llist = push(llist, 11);
// 	llist = push(llist, 11);
// 	cout << ("List before removal of duplicates\n");
// 	printList(llist);
// 	cout << ("List after removal of elements\n");
// 	llist = removeDuplicates(llist);
// 	printList(llist);
// }

//Detection of loop using floyd cycle detection
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

bool isLoop(Node *head){
	if(head == NULL)
		return false;
	
	Node *fast = head, *slow = head;
	while(fast != NULL && fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
		if(fast == slow)
			return true;
	}
	return false;
}

int main(){
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	if (isLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
	return 0;
}

