#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor, which will give data to the node, and
    //point the next to NULL.
    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    for(int i=1;i<position-1;i++){
        temp = temp -> next;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

int main(){

    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,11);
    // print(head);
    insertAtTail(tail, 12);
    // print(head);
    insertAtTail(tail, 14);
    print(head);

    insertAtPosition(head,tail,5,16);
    print(head);
    
    return 0; 
}