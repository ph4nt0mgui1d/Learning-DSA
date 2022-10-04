//Iterative methods
//naive solution
#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *revList(Node *head){
    vector<int> arr;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
        arr.push_back(curr->data);

    for(Node *curr=head;curr!=NULL;curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}

int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	head=revList(head);
	printlist(head);
	return 0;
} 

//Efficient solution
#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *reverse(Node *head){
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	head=reverse(head);
	printlist(head);
	return 0;
} 

//Recursive methods
#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *recRevL(Node *head){
    if(head==NULL||head->next==NULL)return head;
    Node *rest_head=recRevL(head->next);
    Node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	head=recRevL(head);
	printlist(head);
	return 0;
} 

//method 2
#include <bits/stdc++.h>
using namespace std;

// Linked list Node
struct Node {
	int data;
	Node* next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};
Node* removeDuplicates(Node* head)
{
	Node *temp = head, *prev = head;

	while (temp != NULL) {
		if (temp->data != prev->data) {
			prev->next = temp;
			prev = temp;
		}
		temp = temp->next;
	}
	if (prev != temp)
		prev->next = NULL;
	return head;
}

Node* push(Node* head, int new_data)
{
	Node* new_node = new Node(new_data);
	new_node->next = head;
	head = new_node;
	return head;
}
void printList(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	Node* llist = NULL;
	llist = push(llist, 20);
	llist = push(llist, 13);
	llist = push(llist, 13);
	llist = push(llist, 11);
	llist = push(llist, 11);
	llist = push(llist, 11);
	cout << ("List before removal of duplicates\n");
	printList(llist);
	cout << ("List after removal of elements\n");
	llist = removeDuplicates(llist);
	printList(llist);
}
