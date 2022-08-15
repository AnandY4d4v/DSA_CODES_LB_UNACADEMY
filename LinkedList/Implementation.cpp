#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //Constructor
 Node(int n){
 this -> data = n;
 this ->next =NULL;
 }
};

//insert at head
void insertathead(Node* &head, int n){
  Node* temp= new Node(n);
  temp -> next = head;
  head = temp;
}
void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
}
//Printing
void print(Node* &head){
 
     Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

int main (){
    int m=1, n=2;
    Node* node1 = new Node(8);
    Node* head=node1;
    insertathead( head, 7);
    /*insertathead( head, 6);
    insertathead( head, 5);
    insertathead( head, 4);
    insertathead( head, 3);
    insertathead( head, 2);
    insertathead( head, 1);*/
    print (head);
    int c=2;
    Node* temp=head;
    while(c--){
            temp=temp->next;
    }
    cout<<temp->data;
    int k=n;
    Node*curr=temp->next;
    while(k--){
        curr=curr->next;
        cout<<"go";
    }
    cout<<"n"<<curr->data;
    return 0;
} 