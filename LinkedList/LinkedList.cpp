
#include<iostream>
using namespace std;

class Node {

    //Data Member are below:
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this->data  = data;
        this->next = NULL;
    }

};
void insertathead(Node* &head, int d) {
        //step 1: create new node
        //Node* newNode = new Node(d);
         Node* newNode = NULL;
        //step2: set next ptr to head node
        newNode->next = head;
        //step3: head update;
        head = newNode;
}
void traverse(Node* &head) {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

int main() {

    //object creation

    Node* node1 = new Node(3);
    Node* head = node1;
    insertathead( head, 10);
    traverse(head);
    return 0;
}